/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXCMMEngineDrivenLayoutConfiguration : NSObject {

	long long _layoutType;
	double _headerHeight;
	double _bannerHeight;
	double _statusFooterHeight;
	double _sendBackFooterHeight;

}

@property (assign,nonatomic) long long layoutType;                     //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) double headerHeight;                      //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double bannerHeight;                      //@synthesize bannerHeight=_bannerHeight - In the implementation block
@property (assign,nonatomic) double statusFooterHeight;                //@synthesize statusFooterHeight=_statusFooterHeight - In the implementation block
@property (assign,nonatomic) double sendBackFooterHeight;              //@synthesize sendBackFooterHeight=_sendBackFooterHeight - In the implementation block
-(long long)layoutType;
-(double)bannerHeight;
-(void)setBannerHeight:(double)arg1 ;
-(double)statusFooterHeight;
-(void)setStatusFooterHeight:(double)arg1 ;
-(double)sendBackFooterHeight;
-(void)setSendBackFooterHeight:(double)arg1 ;
-(void)setHeaderHeight:(double)arg1 ;
-(void)setLayoutType:(long long)arg1 ;
-(double)headerHeight;
@end

