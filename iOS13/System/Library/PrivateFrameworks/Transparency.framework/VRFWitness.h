/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyVRFVerifier, NSData;

@interface VRFWitness : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyVRFVerifier * verifier; 
@property (retain) NSData * message; 
@property (retain) NSData * salt; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSData * output; 
@property (nonatomic,copy) NSData * proof; 
+(id)descriptor;
-(NSData *)message;
-(void)setMessage:(NSData *)arg1 ;
-(NSData *)salt;
-(BOOL)verifyWithError:(id*)arg1 ;
-(void)setSalt:(NSData *)arg1 ;
-(TransparencyVRFVerifier *)verifier;
-(void)setVerifier:(TransparencyVRFVerifier *)arg1 ;
@end

