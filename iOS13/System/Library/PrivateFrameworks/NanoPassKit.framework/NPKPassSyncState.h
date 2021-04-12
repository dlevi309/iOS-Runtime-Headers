/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSData;

@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _syncStateItems;

}

@property (nonatomic,retain) NSMutableDictionary * syncStateItems;              //@synthesize syncStateItems=_syncStateItems - In the implementation block
@property (nonatomic,readonly) NSData * syncStateHash; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPasses:(id)arg1 ;
-(id)initWithProtoSyncState:(id)arg1 ;
-(id)protoSyncState;
-(BOOL)diffWithBaselineState:(id)arg1 representsMaterialDifferenceFromState:(id)arg2 ;
-(id)passSyncStateByApplyingChange:(id)arg1 ;
-(NSData *)syncStateHash;
-(id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)arg1 ;
-(id)passSyncStateByRemovingPassWithUniqueID:(id)arg1 ;
-(NSMutableDictionary *)syncStateItems;
-(id)commonBaselinePassSyncStateWithState:(id)arg1 ;
-(BOOL)stateIsSubsetOfUnionOfPassSyncStates:(id)arg1 ;
-(void)compareWithBaselinePassSyncState:(id)arg1 outAddedPassUniqueIDs:(id*)arg2 outUpdatedPassUniqueIDs:(id*)arg3 outRemovedPassUniqueIDs:(id*)arg4 ;
-(id)initWithSyncStateItems:(id)arg1 ;
-(BOOL)isEqualToPassSyncState:(id)arg1 ;
-(void)setSyncStateItems:(NSMutableDictionary *)arg1 ;
-(BOOL)stateContainsSyncStateItem:(id)arg1 ;
@end

