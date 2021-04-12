/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)type;
-(Class)dataClass;
-(BOOL)isPrivate;
-(Class)facadeClass;
-(NSDictionary *)slotsByName;

@end

