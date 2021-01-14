/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDClientStateReporting.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSArray, NSString;

@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable> {

	BOOL _isForeground;
	BOOL _isRunningTests;
	NSArray* _visibleMailboxesObjectIds;

}

@property (assign,nonatomic) BOOL isRunningTests;                                //@synthesize isRunningTests=_isRunningTests - In the implementation block
@property (nonatomic,readonly) NSArray * visibleMailboxesObjectIds;              //@synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds - In the implementation block
@property (nonatomic,readonly) BOOL isForeground;                                //@synthesize isForeground=_isForeground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)log;
-(void)setClientIsInForeground:(BOOL)arg1 ;
-(void)setIsRunningTests:(BOOL)arg1 ;
-(id)init;
-(BOOL)isRunningTests;
-(id)giveBoostWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isForeground;
-(void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1 ;
-(NSArray *)visibleMailboxesObjectIds;
-(void)setClientIsRunningTests:(BOOL)arg1 ;
-(void)dealloc;
@end

