/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFVSGetVoiceAssetsRequest : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * quality; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getVoiceAssetsRequest;
+(id)getVoiceAssetsRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)quality;
-(void)setQuality:(NSString *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
-(NSString *)language;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end

