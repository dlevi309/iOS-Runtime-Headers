/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class IDSServerCertificate, NSData;

@interface IDSAuthenticationCertificate : NSObject {

	IDSServerCertificate* _backingCertificate;

}

@property (nonatomic,readonly) IDSServerCertificate * backingCertificate;              //@synthesize backingCertificate=_backingCertificate - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
-(id)description;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithBackingCertificate:(id)arg1 ;
-(IDSServerCertificate *)backingCertificate;
@end

