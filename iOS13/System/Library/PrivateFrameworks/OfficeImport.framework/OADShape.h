/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(int)type;
-(id)textBody;
-(void)setTextBody:(id)arg1 ;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
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

