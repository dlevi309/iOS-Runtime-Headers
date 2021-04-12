/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


#import <MessageUI/MessageUI-Structs.h>
@class UITraitCollection;

@interface MFComposeDisplayMetrics : NSObject {

	UITraitCollection* _traitCollection;
	NSDirectionalEdgeInsets _layoutMargins;
	UIEdgeInsets _safeAreaInsets;

}

@property (nonatomic,retain) UITraitCollection * traitCollection;                             //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets layoutMargins;                           //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                     //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (nonatomic,readonly) BOOL isCompactHeight; 
@property (nonatomic,readonly) double trailingButtonMidlineOffset; 
@property (nonatomic,readonly) UIEdgeInsets sendBarButtonItemImageInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets headerViewSeparatorInset; 
+(id)displayMetricsWithTraitCollection:(id)arg1 layoutMargins:(NSDirectionalEdgeInsets)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(UIEdgeInsets)safeAreaInsets;
-(UITraitCollection *)traitCollection;
-(void)setLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)layoutMargins;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isCompactHeight;
-(double)trailingButtonMidlineOffset;
-(UIEdgeInsets)sendBarButtonItemImageInsets;
-(NSDirectionalEdgeInsets)headerViewSeparatorInset;
@end

