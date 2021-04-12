/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFAccessResourcePerWorkflowState.h>

@class NSSet, NSMapTable, NSString;

@interface WFGranularAccessResourcePerWorkflowState : NSObject <WFAccessResourcePerWorkflowState> {

	NSSet* _entries;
	NSMapTable* _entriesMapTable;

}

@property (nonatomic,retain) NSMapTable * entriesMapTable;               //@synthesize entriesMapTable=_entriesMapTable - In the implementation block
@property (nonatomic,readonly) NSSet * entries;                          //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) BOOL hasDeniedEntries; 
@property (nonatomic,readonly) BOOL hasUndeterminedEntries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)entryTypeClass;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)entries;
-(id)initWithEntries:(id)arg1 ;
-(id)stateBySettingAllEntriesAsAuthorized:(BOOL)arg1 ;
-(id)stateBySettingUndeterminedEntriesToAuthorized:(BOOL)arg1 ;
-(id)stateByPerformingUnionWithState:(id)arg1 ;
-(BOOL)hasUndeterminedEntries;
-(BOOL)hasDeniedEntries;
-(id)stateByPopulatingNotDeterminedEntriesUsingState:(id)arg1 ;
-(NSMapTable *)entriesMapTable;
-(void)setEntriesMapTable:(NSMapTable *)arg1 ;
@end

