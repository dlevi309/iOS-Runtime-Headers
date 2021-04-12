/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSArray, NSIndexSet;

@interface _SlotDescriptor : NSObject {

	long long _family;
	NSArray* _typesRankedList;
	NSIndexSet* _possibleTypes;

}

@property (nonatomic,readonly) long long family;                        //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) NSArray * typesRankedList;               //@synthesize typesRankedList=_typesRankedList - In the implementation block
@property (nonatomic,readonly) NSIndexSet * possibleTypes;              //@synthesize possibleTypes=_possibleTypes - In the implementation block
+(id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3 ;
-(long long)family;
-(BOOL)supportsType:(unsigned long long)arg1 ;
-(NSIndexSet *)possibleTypes;
-(BOOL)allowsType:(unsigned long long)arg1 inFace:(id)arg2 ;
-(NSArray *)typesRankedList;
@end

