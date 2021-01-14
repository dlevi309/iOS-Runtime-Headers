/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary;

@interface RBProcessStateChangeSet : NSObject <NSFastEnumeration> {

	NSMutableDictionary* _stateChangesByIdentity;

}

@property (nonatomic,readonly) BOOL hasChanges; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)processIdentities;
-(void)applyChanges:(id)arg1 ;
-(id)initWithOriginalStatesByIdentity:(id)arg1 updatedStatesByIdentity:(id)arg2 ;
-(BOOL)hasChanges;
-(id)processStateChangeForIdentity:(id)arg1 ;
-(id)initWithChanges:(id)arg1 ;
@end

