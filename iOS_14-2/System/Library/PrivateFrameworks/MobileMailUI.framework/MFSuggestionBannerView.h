/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFMessageHeaderViewBlock.h>

@class SGBanner, NSArray;

@interface MFSuggestionBannerView : MFMessageHeaderViewBlock {

	SGBanner* _banner;
	NSArray* _bannerConstraints;

}

@property (nonatomic,retain) NSArray * bannerConstraints;              //@synthesize bannerConstraints=_bannerConstraints - In the implementation block
@property (nonatomic,retain) SGBanner * banner;                        //@synthesize banner=_banner - In the implementation block
-(void)willMoveToSuperview:(id)arg1 ;
-(SGBanner *)banner;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setSeparatorDrawsFlushWithTrailingEdge:(BOOL)arg1 ;
-(void)setSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg1 ;
-(void)commonInitWithBanner:(id)arg1 ;
-(NSArray *)bannerConstraints;
-(id)_constraintsForEdges:(unsigned long long)arg1 banner:(id)arg2 useLayoutMarginsGuide:(BOOL)arg3 ;
-(void)setBannerConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 banner:(id)arg2 ;
-(void)setBanner:(SGBanner *)arg1 ;
@end

