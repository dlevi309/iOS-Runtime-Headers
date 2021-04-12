/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString, NSSet, NSDictionary;

@interface HFControlPanelItem : HFItem <NAIdentifiable> {

	NSString* _uniqueIdentifier;
	NSSet* _controlItems;
	NSDictionary* _displayResults;
	NSDictionary* _controlItemsByUUID;
	NSDictionary* _UUIDsByControlItemPointer;

}

@property (nonatomic,readonly) NSDictionary * displayResults;                         //@synthesize displayResults=_displayResults - In the implementation block
@property (nonatomic,readonly) NSDictionary * controlItemsByUUID;                     //@synthesize controlItemsByUUID=_controlItemsByUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * UUIDsByControlItemPointer;              //@synthesize UUIDsByControlItemPointer=_UUIDsByControlItemPointer - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * controlItems;                             //@synthesize controlItems=_controlItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)standardControlPanelItemsForControlItems:(id)arg1 ;
+(id)_controlPanelItemRules;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)uniqueIdentifier;
-(long long)sortPriority;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSDictionary *)displayResults;
-(id)initWithControlItems:(id)arg1 displayResults:(id)arg2 ;
-(NSDictionary *)UUIDsByControlItemPointer;
-(NSDictionary *)controlItemsByUUID;
-(NSSet *)controlItems;
-(id)identifierForControlItem:(id)arg1 ;
-(id)controlItemForIdentifier:(id)arg1 ;
@end

