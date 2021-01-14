/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSBackingStoreDelegate.h>
#import <libobjc.A.dylib/DNDSBackingStore.h>

@protocol DNDSBackingStore, DNDSBackingStoreRecord, DNDSBackingStoreDelegate;
@class NSString;

@interface DNDSMemoryCachedBackingStore : NSObject <DNDSBackingStoreDelegate, DNDSBackingStore> {

	id<DNDSBackingStore> _underlyingBackingStore;
	id<DNDSBackingStoreRecord> _cache;
	os_unfair_lock_s _lock;
	id<DNDSBackingStoreDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DNDSBackingStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DNDSBackingStoreDelegate>)delegate;
-(id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4 ;
-(void)setDelegate:(id<DNDSBackingStoreDelegate>)arg1 ;
-(id)readRecordWithError:(id*)arg1 ;
-(unsigned long long)writeRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithUnderlyingBackingStore:(id)arg1 ;
@end

