/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(NSDirectionalEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)isCompactHeight;
-(double)trailingButtonMidlineOffset;
-(UIEdgeInsets)sendBarButtonItemImageInsets;
-(NSDirectionalEdgeInsets)headerViewSeparatorInset;
@end

