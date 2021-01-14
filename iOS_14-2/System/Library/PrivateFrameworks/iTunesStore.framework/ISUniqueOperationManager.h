/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)predecessorForKey:(id)arg1 operation:(id)arg2 ;
-(void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2 ;
-(id)_contextForOperation:(id)arg1 ;
-(void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2 ;
-(void)checkInOperation:(id)arg1 ;
-(id)lockWithIdentifier:(id)arg1 ;
-(id)_activeContext;
-(void)dealloc;
-(void)checkOutOperation:(id)arg1 ;
@end

