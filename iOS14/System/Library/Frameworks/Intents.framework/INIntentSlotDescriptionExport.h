/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSArray;


@protocol INIntentSlotDescriptionExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long tag; 
@property (nonatomic,copy,readonly) NSString * facadePropertyName; 
@property (nonatomic,copy,readonly) NSString * dataPropertyName; 
@property (nonatomic,readonly) long long valueType; 
@property (nonatomic,readonly) long long valueStyle; 
@property (nonatomic,readonly) BOOL isExtended; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,readonly) SEL resolveSelector; 
@property (nonatomic,readonly) SEL deprecatedResolveSelector; 
@property (nonatomic,copy,readonly) NSArray * resolveSelectorStrings; 
@required
-(long long)valueType;
-(SEL)deprecatedResolveSelector;
-(id)init;
-(unsigned long long)tag;
-(NSString *)name;
-(SEL)resolveSelector;
-(long long)valueStyle;
-(BOOL)isExtended;
-(NSString *)dataPropertyName;
-(NSArray *)resolveSelectorStrings;
-(BOOL)isPrivate;
-(NSString *)facadePropertyName;

@end

