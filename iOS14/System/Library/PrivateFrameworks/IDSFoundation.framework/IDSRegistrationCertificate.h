/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class IDSServerCertificate, NSData;

@interface IDSRegistrationCertificate : NSObject {

	IDSServerCertificate* _backingCertificate;

}

@property (nonatomic,readonly) IDSServerCertificate * backingCertificate;              //@synthesize backingCertificate=_backingCertificate - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithBackingCertificate:(id)arg1 ;
-(IDSServerCertificate *)backingCertificate;
-(id)description;
@end

