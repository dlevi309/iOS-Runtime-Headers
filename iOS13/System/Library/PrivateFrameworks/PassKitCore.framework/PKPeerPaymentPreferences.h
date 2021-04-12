/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKPeerPaymentPreferences : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresConfirmation;
	BOOL _canReceiveFormalPaymentRequests;

}

@property (assign,nonatomic) BOOL requiresConfirmation;                         //@synthesize requiresConfirmation=_requiresConfirmation - In the implementation block
@property (assign,nonatomic) BOOL canReceiveFormalPaymentRequests;              //@synthesize canReceiveFormalPaymentRequests=_canReceiveFormalPaymentRequests - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)preferencesWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)requiresConfirmation;
-(void)setRequiresConfirmation:(BOOL)arg1 ;
-(BOOL)canReceiveFormalPaymentRequests;
-(void)setCanReceiveFormalPaymentRequests:(BOOL)arg1 ;
@end

