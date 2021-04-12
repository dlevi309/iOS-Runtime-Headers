/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(NSString *)type;
-(Class)dataClass;
-(BOOL)isPrivate;
-(NSString *)responseName;
-(Class)facadeClass;
-(SEL)handleSelector;
-(SEL)confirmSelector;

@end

