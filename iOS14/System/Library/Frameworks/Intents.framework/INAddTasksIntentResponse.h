/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INAddTasksIntentResponseExport.h>

@class INTaskList, NSArray, NSString;

@interface INAddTasksIntentResponse : INIntentResponse <INAddTasksIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTaskList * modifiedTaskList; 
@property (nonatomic,copy) NSArray * addedTasks; 
@property (assign,nonatomic) unsigned long long warnings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(void)setAddedTasks:(NSArray *)arg1 ;
-(INTaskList *)modifiedTaskList;
-(id)init;
-(void)setWarnings:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSArray *)addedTasks;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(void)setModifiedTaskList:(INTaskList *)arg1 ;
-(unsigned long long)warnings;
@end

