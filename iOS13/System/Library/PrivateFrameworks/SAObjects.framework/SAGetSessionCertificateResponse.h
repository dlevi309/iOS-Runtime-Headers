/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * certificate; 
+(id)getSessionCertificateResponse;
+(id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)certificate;
-(id)encodedClassName;
-(void)setCertificate:(NSData *)arg1 ;
-(BOOL)requiresResponse;
@end

