/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary;

@interface RBProcessStateChangeSet : NSObject <NSFastEnumeration> {

	NSMutableDictionary* _stateChangesByIdentity;

}

@property (nonatomic,readonly) BOOL hasChanges; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithChanges:(id)arg1 ;
-(BOOL)hasChanges;
-(void)applyChanges:(id)arg1 ;
-(id)processStateChangeForIdentity:(id)arg1 ;
-(void)_diffOriginalStatesByIdentity:(id)arg1 withUpdatedStatesByIdentity:(id)arg2 ;
-(id)initWithOriginalStatesByIdentity:(id)arg1 updatedStatesByIdentity:(id)arg2 ;
-(id)processIdentities;
@end

