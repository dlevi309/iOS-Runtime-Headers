/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class OADDrawable, CMDrawableStyle, NSData, NSString, OADOrientedBounds;

@interface CMDrawableMapper : CMMapper {

	OADDrawable* mDrawable;
	CMDrawableStyle* mStyle;
	NSData* mImageBinaryData;
	NSString* mName;
	NSString* mExtension;
	int mResourceType;
	NSString* mSourcePath;
	CGRect mBox;
	float mRotation;
	BOOL mIsSupported;
	BOOL mIsCropped;
	CGRect mUncroppedBox;
	OADOrientedBounds* mOrientedBounds;

}
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(BOOL)isCropped;
-(id)initWithParent:(id)arg1 ;
-(CGRect)box;
-(id)blipAtIndex:(unsigned)arg1 ;
-(id)initWithOadDrawable:(id)arg1 parent:(id)arg2 ;
-(void)setBoundingBox;
-(void)setWithOadImage:(id)arg1 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)calculateUncroppedBox:(id)arg1 ;
-(CGRect)uncroppedBox;
-(id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2 ;
-(void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)shapeTextBoxRect;
-(void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(BOOL)arg3 withState:(id)arg4 ;
-(void)mapBounds;
-(id)convertMetafileToPdf;
-(void)mapImageBinaryData;
@end

