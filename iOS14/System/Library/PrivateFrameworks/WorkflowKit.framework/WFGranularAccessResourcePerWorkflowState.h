/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithEntries:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)entries;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)stateByPerformingUnionWithState:(id)arg1 ;
-(id)stateByPopulatingNotDeterminedEntriesUsingState:(id)arg1 ;
-(id)stateBySettingUndeterminedEntriesToAuthorized:(BOOL)arg1 ;
-(id)stateBySettingAllEntriesAsAuthorized:(BOOL)arg1 ;
-(BOOL)hasDeniedEntries;
-(BOOL)hasUndeterminedEntries;
-(NSMapTable *)entriesMapTable;
-(void)setEntriesMapTable:(NSMapTable *)arg1 ;
@end

