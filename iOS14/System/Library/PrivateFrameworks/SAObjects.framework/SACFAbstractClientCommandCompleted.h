/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * outputLogs; 
@property (nonatomic,copy) NSString * results; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)abstractClientCommandCompleted;
+(id)abstractClientCommandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setResults:(NSString *)arg1 ;
-(NSString *)results;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)outputLogs;
-(void)setOutputLogs:(NSArray *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
@end

