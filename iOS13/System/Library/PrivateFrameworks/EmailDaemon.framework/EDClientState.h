/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDForegroundReporting.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSArray, NSString;

@interface EDClientState : NSObject <EDForegroundReporting, EFLoggable> {

	BOOL _isForeground;
	NSArray* _visibleMailboxesObjectIds;

}

@property (nonatomic,readonly) NSArray * visibleMailboxesObjectIds;              //@synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isForeground;                                //@synthesize isForeground=_isForeground - In the implementation block
+(id)sharedInstance;
+(id)log;
-(id)init;
-(void)dealloc;
-(BOOL)isForeground;
-(void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1 ;
-(void)setClientIsInForeground:(BOOL)arg1 ;
-(id)giveBoostWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)visibleMailboxesObjectIds;
@end

