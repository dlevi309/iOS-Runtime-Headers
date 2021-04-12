/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFBCWriteDnuForSubmission : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * filePrefix; 
@property (nonatomic,copy) NSString * submittedData; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)writeDnuForSubmission;
+(id)writeDnuForSubmissionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)filePrefix;
-(NSString *)submittedData;
-(void)setFilePrefix:(NSString *)arg1 ;
-(void)setSubmittedData:(NSString *)arg1 ;
@end

