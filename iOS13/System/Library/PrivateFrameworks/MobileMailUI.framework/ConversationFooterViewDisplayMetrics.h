/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/


#import <MobileMailUI/MobileMailUI-Structs.h>
@interface ConversationFooterViewDisplayMetrics : NSObject {

	BOOL _usePhoneLandscapeSymbolConfiguration;
	double _toolbarHeight;
	double _topToBaseline;

}

@property (assign,nonatomic) double toolbarHeight;                                   //@synthesize toolbarHeight=_toolbarHeight - In the implementation block
@property (assign,nonatomic) double topToBaseline;                                   //@synthesize topToBaseline=_topToBaseline - In the implementation block
@property (assign,nonatomic) BOOL usePhoneLandscapeSymbolConfiguration;              //@synthesize usePhoneLandscapeSymbolConfiguration=_usePhoneLandscapeSymbolConfiguration - In the implementation block
+(id)displayMetricsWithSafeAreaInsets:(UIEdgeInsets)arg1 interfaceOrientation:(long long)arg2 traitCollection:(id)arg3 ;
-(void)setUsePhoneLandscapeSymbolConfiguration:(BOOL)arg1 ;
-(void)setTopToBaseline:(double)arg1 ;
-(void)setToolbarHeight:(double)arg1 ;
-(double)toolbarHeight;
-(double)topToBaseline;
-(BOOL)usePhoneLandscapeSymbolConfiguration;
@end

