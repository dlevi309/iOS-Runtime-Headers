/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSMutableSet, NSMapTable;

@interface _TVRCExpiringStore : NSObject {

	NSMutableSet* _store;
	NSMapTable* _identifierToBlockMap;

}
-(id)init;
-(BOOL)containsIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)removeIdentifier:(id)arg1 ;
-(void)_removeIdentifierAndPerformCompletion:(id)arg1 ;
-(void)addIdentifier:(id)arg1 withExpiration:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

