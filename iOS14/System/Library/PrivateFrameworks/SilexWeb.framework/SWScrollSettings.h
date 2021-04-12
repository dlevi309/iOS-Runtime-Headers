/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/


@interface SWScrollSettings : NSObject {

	BOOL _scrollEnabled;
	BOOL _scrollsToTop;
	BOOL _showsVerticalScrollIndicator;

}

@property (nonatomic,readonly) BOOL scrollEnabled;                             //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (nonatomic,readonly) BOOL scrollsToTop;                              //@synthesize scrollsToTop=_scrollsToTop - In the implementation block
@property (nonatomic,readonly) BOOL showsVerticalScrollIndicator;              //@synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator - In the implementation block
-(BOOL)scrollsToTop;
-(BOOL)scrollEnabled;
-(BOOL)showsVerticalScrollIndicator;
-(id)initWithScrollEnabled:(BOOL)arg1 scrollsToTop:(BOOL)arg2 showsVerticalScrollIndicator:(BOOL)arg3 ;
@end

