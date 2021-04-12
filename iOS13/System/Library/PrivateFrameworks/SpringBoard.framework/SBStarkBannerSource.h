/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIBannerSource.h>
#import <libobjc.A.dylib/SBUIBannerTargetManagerObserver.h>

@protocol SBStarkNotificationsConfiguring, SBUIBannerTarget;
@class NSMutableArray, NSString;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver> {

	id<SBStarkNotificationsConfiguring> _configuration;
	void* _allowedTargetIdentifier;
	id<SBUIBannerTarget> _target;
	NSMutableArray* _enqueuedItems;

}

@property (nonatomic,readonly) id<SBStarkNotificationsConfiguring> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SBStarkNotificationsConfiguring>)configuration;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void*)arg2 ;
-(unsigned long long)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enqueueItem:(id)arg1 ;
-(id)indexesOfEnqueuedItemsMatchingContext:(id)arg1 ;
-(void)removeEnqueuedItemsAtIndexes:(id)arg1 ;
-(id)currentItemFromTarget;
-(void)dismissCurrentItemFromTarget;
@end

