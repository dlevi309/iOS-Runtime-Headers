/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, NSObject;

@interface ODDPointPropertySet : NSObject {

	NSString* mLayoutTypeId;
	NSString* mPresentationName;
	NSString* mPresentationStyleLabel;
	int mPresentationStyleIndex;
	int mPresentationStyleCount;
	NSObject* mPresentationAssociatedId;
	BOOL mCustomVerticalFlip;
	double mCustomScaleX;
	double mCustomScaleY;
	double mCustomOffsetX;
	double mCustomOffsetY;

}
-(id)description;
-(id)layoutTypeId;
-(void)setPresentationName:(id)arg1 ;
-(id)presentationName;
-(id)presentationStyleLabel;
-(int)presentationStyleIndex;
-(double)customScaleX;
-(double)customScaleY;
-(double)customOffsetX;
-(double)customOffsetY;
-(void)setLayoutTypeId:(id)arg1 ;
-(void)setPresentationStyleLabel:(id)arg1 ;
-(void)setPresentationStyleIndex:(int)arg1 ;
-(int)presentationStyleCount;
-(void)setPresentationStyleCount:(int)arg1 ;
-(id)presentationAssociatedId;
-(void)setPresentationAssociatedId:(id)arg1 ;
-(BOOL)customVerticalFlip;
-(void)setCustomVerticalFlip:(BOOL)arg1 ;
-(void)setCustomScaleX:(double)arg1 ;
-(void)setCustomScaleY:(double)arg1 ;
-(void)setCustomOffsetX:(double)arg1 ;
-(void)setCustomOffsetY:(double)arg1 ;
@end

