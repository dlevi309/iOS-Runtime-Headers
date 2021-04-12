/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADTextBody* mTextBody;
	OADOrientedBounds* mTextOrientedBounds;

}

@property (nonatomic,retain) OADOrientedBounds * textOrientedBounds; 
-(id)geometry;
-(id)init;
-(id)textBody;
-(id)description;
-(void)setGeometry:(id)arg1 ;
-(int)type;
-(void)setTextBody:(id)arg1 ;
-(id)shapeStyle;
-(id)shapeProperties;
-(BOOL)isTextBox;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flattenProperties;
-(void)createPresetGeometryWithShapeType:(int)arg1 ;
-(OADOrientedBounds *)textOrientedBounds;
-(void)setTextOrientedBounds:(OADOrientedBounds *)arg1 ;
@end

