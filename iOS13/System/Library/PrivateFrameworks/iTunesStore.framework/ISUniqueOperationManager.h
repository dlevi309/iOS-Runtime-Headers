/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <libobjc.A.dylib/ISSingleton.h>

@class ISUniqueOperationContext, NSMutableArray, NSLock, NSMutableDictionary, NSString;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {

	ISUniqueOperationContext* _activeContext;
	NSMutableArray* _contexts;
	NSLock* _lock;
	NSMutableDictionary* _lockPool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)checkInOperation:(id)arg1 ;
-(void)checkOutOperation:(id)arg1 ;
-(id)lockWithIdentifier:(id)arg1 ;
-(id)_activeContext;
-(id)_contextForOperation:(id)arg1 ;
-(id)predecessorForKey:(id)arg1 operation:(id)arg2 ;
-(void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2 ;
-(void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2 ;
@end

