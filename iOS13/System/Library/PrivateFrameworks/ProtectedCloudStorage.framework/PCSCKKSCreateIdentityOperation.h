/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;

}

@property (retain) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
-(void)start;
-(PCSCKKSItemModifyContext *)context;
-(void)setContext:(PCSCKKSItemModifyContext *)arg1 ;
-(void)storePCSIdentity:(PCSIdentityDataRef)arg1 ;
-(void)createManateePCSIdentity;
-(void)setIdentityToCurrent;
-(int)addAndNotifyOnSync:(PCSIdentityDataRef)arg1 attributes:(CFDictionaryRef)arg2 returnAttributes:(const _CFDictionary*)arg3 complete:(/*^block*/id)arg4 ;
-(void)itemStored:(id)arg1 ;
-(id)initWithItemModifyContext:(id)arg1 ;
@end

