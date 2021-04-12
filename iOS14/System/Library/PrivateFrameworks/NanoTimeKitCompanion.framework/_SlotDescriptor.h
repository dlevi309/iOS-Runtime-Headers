/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSArray, NSIndexSet;

@interface _SlotDescriptor : NSObject {

	NSArray* _familiesRankedList;
	NSArray* _typesRankedList;
	NSIndexSet* _possibleTypes;

}

@property (nonatomic,readonly) NSArray * familiesRankedList;              //@synthesize familiesRankedList=_familiesRankedList - In the implementation block
@property (nonatomic,readonly) NSArray * typesRankedList;                 //@synthesize typesRankedList=_typesRankedList - In the implementation block
@property (nonatomic,readonly) NSIndexSet * possibleTypes;                //@synthesize possibleTypes=_possibleTypes - In the implementation block
+(id)descriptorWithComplicationFamilies:(id)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3 ;
-(BOOL)supportsType:(unsigned long long)arg1 ;
-(NSArray *)familiesRankedList;
-(BOOL)allowsFamily:(long long)arg1 inFace:(id)arg2 ;
-(BOOL)supportsFamiliesOfComplications:(id)arg1 inFace:(id)arg2 ;
-(NSIndexSet *)possibleTypes;
-(BOOL)allowsType:(unsigned long long)arg1 inFace:(id)arg2 ;
-(void)enumerateAllowedFamiliesForFace:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSArray *)typesRankedList;
@end

