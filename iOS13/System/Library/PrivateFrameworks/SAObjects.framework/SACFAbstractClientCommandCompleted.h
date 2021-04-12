/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * outputLogs; 
@property (nonatomic,copy) NSString * results; 
@property (assign,nonatomic) long long status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)abstractClientCommandCompleted;
+(id)abstractClientCommandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)results;
-(long long)status;
-(id)groupIdentifier;
-(void)setStatus:(long long)arg1 ;
-(void)setResults:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)outputLogs;
-(void)setOutputLogs:(NSArray *)arg1 ;
@end

