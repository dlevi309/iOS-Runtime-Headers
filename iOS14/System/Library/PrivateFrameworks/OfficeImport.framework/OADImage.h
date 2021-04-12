/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADOle, OADMovie;

@interface OADImage : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADOle* mOle;
	OADMovie* mMovie;

}
-(id)geometry;
-(id)ole;
-(id)movie;
-(id)init;
-(id)description;
-(void)setGeometry:(id)arg1 ;
-(void)setMovie:(id)arg1 ;
-(void)setOle:(id)arg1 ;
-(id)imageProperties;
-(id)initWithBlipRef:(id)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(id)createImageFill;
-(void)createPictureFramePresetGeometry;
@end

