/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@protocol SBUIBannerSource, SBUIBannerTarget;
@class SBUIBannerItem;

@interface SBUIBannerContext : NSObject {

	SBUIBannerItem* _item;
	id<SBUIBannerSource> _source;
	id<SBUIBannerTarget> _target;
	BOOL _isValid;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid;                //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) SBUIBannerItem * item;                    //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) id<SBUIBannerSource> source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) id<SBUIBannerTarget> target;              //@synthesize target=_target - In the implementation block
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(id<SBUIBannerTarget>)target;
-(id<SBUIBannerSource>)source;
-(SBUIBannerItem *)item;
-(id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 ;
@end

