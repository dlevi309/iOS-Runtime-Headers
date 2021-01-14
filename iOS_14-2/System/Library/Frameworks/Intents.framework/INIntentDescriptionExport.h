/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString;


@protocol INIntentDescriptionExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * responseName; 
@property (nonatomic,readonly) Class facadeClass; 
@property (nonatomic,readonly) Class dataClass; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,readonly) SEL handleSelector; 
@property (nonatomic,readonly) SEL confirmSelector; 
@required
-(SEL)confirmSelector;
-(id)init;
-(NSString *)name;
-(Class)facadeClass;
-(NSString *)type;
-(BOOL)isPrivate;
-(SEL)handleSelector;
-(NSString *)responseName;
-(Class)dataClass;

@end

