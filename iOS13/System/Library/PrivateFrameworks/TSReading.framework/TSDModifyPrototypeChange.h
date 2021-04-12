/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDPrototypeChange.h>

@class TSSMutablePropertySet, TSSPropertyMap, TSDPropertySourceForModifyPrototypeChange, NSString;

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange> {

	id mPrototype;
	TSSMutablePropertySet* mChangedPropertySet;
	TSSPropertyMap* mChangedPropertyMapBeforeChange;
	TSSPropertyMap* mChangedPropertyMapAfterChange;
	TSDPropertySourceForModifyPrototypeChange* mPropertySourceBeforeChange;
	TSDPropertySourceForModifyPrototypeChange* mPropertySourceAfterChange;
	TSSMutablePropertySet* mPropertiesWithOldValuesRecordedButNotNewValues;

}

@property (retain,readonly) TSSMutablePropertySet * changedPropertySet; 
@property (retain,readonly) TSSPropertyMap * changedPropertyMapBeforeChange; 
@property (retain,readonly) TSSPropertyMap * changedPropertyMapAfterChange; 
@property (retain,readonly) TSSMutablePropertySet * i_propertiesWithOldValuesRecordedButNotNewValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL prototypeIsBeingReplaced; 
@property (readonly) BOOL prototypeIsBeingModified; 
@property (readonly) BOOL prototypeIsBeingDeleted; 
@property (retain,readonly) id prototype; 
@property (retain,readonly) id replacement; 
@property (retain,readonly) id<TSSPropertySource> propertiesBeforeChange; 
@property (retain,readonly) id<TSSPropertySource> propertiesAfterChange; 
-(void)dealloc;
-(NSString *)description;
-(id)replacement;
-(id)prototype;
-(BOOL)prototypeIsBeingReplaced;
-(BOOL)prototypeIsBeingDeleted;
-(BOOL)propertyIsChanging:(int)arg1 ;
-(BOOL)propertiesAreChanging:(id)arg1 ;
-(BOOL)prototypeIsBeingModified;
-(id<TSSPropertySource>)propertiesBeforeChange;
-(id<TSSPropertySource>)propertiesAfterChange;
-(TSSMutablePropertySet *)changedPropertySet;
-(id)initModifyPrototypeChangeForPrototype:(id)arg1 ;
-(TSSPropertyMap *)changedPropertyMapBeforeChange;
-(TSSPropertyMap *)changedPropertyMapAfterChange;
-(TSSMutablePropertySet *)i_propertiesWithOldValuesRecordedButNotNewValues;
@end

