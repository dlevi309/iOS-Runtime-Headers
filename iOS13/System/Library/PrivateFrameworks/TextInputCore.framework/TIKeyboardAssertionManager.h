/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)singletonInstance;
+(id)sharedAssertionManager;
+(void)setSharedAssertionManager:(id)arg1 ;
-(id)init;
-(id<TIKeyboardAssertionManagerDelegate>)delegate;
-(void)setDelegate:(id<TIKeyboardAssertionManagerDelegate>)arg1 ;
-(NSHashTable *)assertions;
-(void)performUpdate;
-(BOOL)hasAssertions;
-(void)releaseBackgroundActivityAssertion;
-(void)addAssertionForObject:(id)arg1 ;
-(void)removeAssertionForObject:(id)arg1 ;
-(void)retainBackgroundActivityAssertion;
-(BOOL)hasBackgroundActivityAssertions;
-(void)scheduleUpdate;
-(void)performBackgroundActivityUpdate;
-(void)setHasAssertions:(BOOL)arg1 ;
-(BOOL)pendingUpdate;
-(void)setPendingUpdate:(BOOL)arg1 ;
-(void)setHasBackgroundActivityAssertions:(BOOL)arg1 ;
-(long long)backgroundActivityAssertions;
-(void)setBackgroundActivityAssertions:(long long)arg1 ;
@end

