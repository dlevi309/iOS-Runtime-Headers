/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString, NSSet;

@interface HFCharacteristicGroup : NSObject {

	NSString* _identifier;
	NSString* _title;
	NSSet* _characteristicTypes;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long groupSortPriority; 
@property (nonatomic,copy,readonly) NSSet * characteristicTypes;              //@synthesize characteristicTypes=_characteristicTypes - In the implementation block
+(id)_targetCurrentStateCharacteristicTypeMap;
+(id)_targetCurrentStateCharacteristicGroups;
+(id)_currentTargetStateCharacteristicTypeMap;
+(id)allCharacteristicGroups;
+(id)groupedTitleForCharacteristicType:(id)arg1 ;
+(id)characteristicGroupForCharacteristicType:(id)arg1 ;
+(id)characteristicGroupForIdentifier:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(NSString *)title;
-(NSSet *)characteristicTypes;
-(id)initWithID:(id)arg1 title:(id)arg2 characteristicTypes:(id)arg3 ;
-(long long)groupSortPriority;
@end

