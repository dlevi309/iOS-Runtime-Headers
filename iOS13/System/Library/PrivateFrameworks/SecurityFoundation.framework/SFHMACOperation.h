/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SFMessageAuthenticationCodeOperation.h>

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {

	id _hmacOperationInternal;

}

@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(id)initWithDigestOperation:(id)arg1 ;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
@end

