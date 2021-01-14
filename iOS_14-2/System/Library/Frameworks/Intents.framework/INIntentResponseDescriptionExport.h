/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSDictionary;


@protocol INIntentResponseDescriptionExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) Class facadeClass; 
@property (nonatomic,readonly) Class dataClass; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,copy,readonly) NSDictionary * slotsByName; 
@required
-(id)init;
-(NSDictionary *)slotsByName;
-(NSString *)name;
-(Class)facadeClass;
-(NSString *)type;
-(BOOL)isPrivate;
-(Class)dataClass;

@end

