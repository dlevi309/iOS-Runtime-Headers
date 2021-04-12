/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(unsigned long long)tag;
-(long long)valueType;
-(BOOL)isExtended;
-(BOOL)isPrivate;
-(NSString *)facadePropertyName;
-(NSString *)dataPropertyName;
-(long long)valueStyle;
-(SEL)resolveSelector;
-(SEL)deprecatedResolveSelector;
-(NSArray *)resolveSelectorStrings;

@end

