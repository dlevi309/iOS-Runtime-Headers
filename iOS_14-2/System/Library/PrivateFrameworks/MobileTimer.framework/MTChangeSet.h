/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSSet, NSDictionary, NSArray;

@interface MTChangeSet : NSObject {

	NSSet* _changedProperties;
	NSDictionary* _changeDictionary;

}

@property (nonatomic,retain) NSSet * changedProperties;                    //@synthesize changedProperties=_changedProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * changeDictionary;              //@synthesize changeDictionary=_changeDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * changes; 
+(id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 ;
+(id)dictionaryFromChanges:(id)arg1 ;
+(id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 inProperties:(id)arg3 ;
-(NSArray *)changes;
-(BOOL)isEquivalentToChangeSet:(id)arg1 ;
-(id)changeSetByAddingChangeSet:(id)arg1 ;
-(BOOL)hasChangeForProperty:(id)arg1 ;
-(BOOL)hasChangesInCommonWithChangeSet:(id)arg1 ;
-(id)deserializedChangedValueForProperty:(id)arg1 hasProperty:(BOOL*)arg2 ;
-(id)_deserializer;
-(void)setChangedProperties:(NSSet *)arg1 ;
-(void)setChangeDictionary:(NSDictionary *)arg1 ;
-(BOOL)hasChangesInProperties:(id)arg1 ;
-(id)description;
-(id)initWithChanges:(id)arg1 ;
-(id)initWithChangeDictionary:(id)arg1 ;
-(NSDictionary *)changeDictionary;
-(BOOL)_isEqualToChangeSet:(id)arg1 checkOriginalValues:(BOOL)arg2 ;
-(id)changedValueForProperty:(id)arg1 hasProperty:(BOOL*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)changedProperties;
@end

