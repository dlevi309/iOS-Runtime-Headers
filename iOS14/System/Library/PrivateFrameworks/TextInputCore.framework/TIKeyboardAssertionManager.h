/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIKeyboardAssertionManaging.h>

@protocol TIKeyboardAssertionManagerDelegate;
@class NSHashTable, NSString;

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging> {

	BOOL _hasAssertions;
	BOOL _pendingUpdate;
	BOOL _hasBackgroundActivityAssertions;
	id<TIKeyboardAssertionManagerDelegate> _delegate;
	NSHashTable* _assertions;
	long long _backgroundActivityAssertions;

}

@property (assign,nonatomic) BOOL hasAssertions;                                           //@synthesize hasAssertions=_hasAssertions - In the implementation block
@property (assign,nonatomic) BOOL pendingUpdate;                                           //@synthesize pendingUpdate=_pendingUpdate - In the implementation block
@property (nonatomic,readonly) NSHashTable * assertions;                                   //@synthesize assertions=_assertions - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundActivityAssertions;                         //@synthesize hasBackgroundActivityAssertions=_hasBackgroundActivityAssertions - In the implementation block
@property (assign,nonatomic) long long backgroundActivityAssertions;                       //@synthesize backgroundActivityAssertions=_backgroundActivityAssertions - In the implementation block
@property (assign,nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedAssertionManager;
+(void)setSharedAssertionManager:(id)arg1 ;
-(NSHashTable *)assertions;
-(void)scheduleUpdate;
-(id)init;
-(long long)backgroundActivityAssertions;
-(id<TIKeyboardAssertionManagerDelegate>)delegate;
-(void)retainBackgroundActivityAssertion;
-(void)setPendingUpdate:(BOOL)arg1 ;
-(BOOL)hasBackgroundActivityAssertions;
-(void)performUpdate;
-(BOOL)pendingUpdate;
-(void)addAssertionForObject:(id)arg1 ;
-(void)setHasBackgroundActivityAssertions:(BOOL)arg1 ;
-(void)setDelegate:(id<TIKeyboardAssertionManagerDelegate>)arg1 ;
-(BOOL)hasAssertions;
-(void)releaseBackgroundActivityAssertion;
-(void)performBackgroundActivityUpdate;
-(void)setBackgroundActivityAssertions:(long long)arg1 ;
-(void)setHasAssertions:(BOOL)arg1 ;
-(void)removeAssertionForObject:(id)arg1 ;
@end

