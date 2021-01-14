/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class NSObject, TransparencyVRFVerifier, NSData;

@interface VRFWitness : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyVRFVerifier * verifier; 
@property (retain) NSData * message; 
@property (retain) NSData * salt; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSData * output; 
@property (nonatomic,copy) NSData * proof; 
+(id)descriptor;
-(void)setMessage:(NSData *)arg1 ;
-(NSData *)message;
-(NSData *)salt;
-(void)setSalt:(NSData *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(TransparencyVRFVerifier *)verifier;
-(void)setVerifier:(TransparencyVRFVerifier *)arg1 ;
@end

