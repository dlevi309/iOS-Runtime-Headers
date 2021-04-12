/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>

@class PUProgressIndicatorView;

@interface PULoadingIndicatorTileViewController : PUTileViewController {

	long long _style;
	PUProgressIndicatorView* _indicatorView;

}

@property (nonatomic,retain) PUProgressIndicatorView * indicatorView;              //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign,nonatomic) long long style;                                      //@synthesize style=_style - In the implementation block
+(void)_destroyIndicatorView:(id)arg1 ;
+(id)_createIndicatorViewForStyle:(long long)arg1 ;
+(CGSize)loadingIndicatorTileSizeForStyle:(long long)arg1 ;
-(void)becomeReusable;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(PUProgressIndicatorView *)indicatorView;
-(void)setIndicatorView:(PUProgressIndicatorView *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end

