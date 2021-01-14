/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXCuratedLibraryLabelConfiguration;

@interface PXCuratedLibraryLabel : UILabel <PXGReusableView> {

	PXCuratedLibraryLabelConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXCuratedLibraryLabelConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                      //@synthesize clippingRect=_clippingRect - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withConfiguration:(id)arg2 ;
-(void)becomeReusable;
-(PXCuratedLibraryLabelConfiguration *)userData;
-(void)prepareForReuse;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(PXCuratedLibraryLabelConfiguration *)arg1 ;
@end

