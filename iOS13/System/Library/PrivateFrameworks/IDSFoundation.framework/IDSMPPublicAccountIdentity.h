/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPPublicAccountIdentity : IDSMPIdentity

@property (nonatomic,readonly) NSData * publicName; 
+(id)publicAccountIdentitywithDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(NSData *)publicName;
-(BOOL)verifySignature:(id)arg1 ofData:(id)arg2 error:(id*)arg3 ;
@end

