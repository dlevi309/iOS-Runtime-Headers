/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFBCGetNumberFormattedString : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,copy) NSString * variant; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getNumberFormattedString;
+(id)getNumberFormattedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setNumber:(NSString *)arg1 ;
-(NSString *)number;
-(NSString *)locale;
-(id)groupIdentifier;
-(void)setLocale:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)variant;
-(void)setVariant:(NSString *)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
-(NSString *)style;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end

