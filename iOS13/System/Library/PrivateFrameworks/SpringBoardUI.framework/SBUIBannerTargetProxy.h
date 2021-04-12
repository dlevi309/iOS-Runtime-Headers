/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <libobjc.A.dylib/SBUIBannerTarget.h>

@protocol SBUIBannerTargetImplementation;
@class NSString;

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget> {

	void* _identifier;
	long long _idiom;
	id<SBUIBannerTargetImplementation> _implementation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long bannerTargetIdiom;               //@synthesize idiom=_idiom - In the implementation block
-(NSString *)description;
-(void)invalidate;
-(void*)bannerTargetIdentifier;
-(long long)bannerTargetIdiom;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(BOOL)isShowingModalBanner;
-(void)signalSource:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
-(id)initWithTargetImplementation:(id)arg1 ;
@end

