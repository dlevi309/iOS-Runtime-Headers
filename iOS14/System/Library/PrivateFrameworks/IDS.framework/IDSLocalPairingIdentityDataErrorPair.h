/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSError;

@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding> {

	NSData* _identityData;
	NSError* _error;

}

@property (nonatomic,retain) NSData * identityData;              //@synthesize identityData=_identityData - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIdentityData:(NSData *)arg1 ;
-(id)initWithIdentityData:(id)arg1 error:(id)arg2 ;
-(id)initWithIdentityData:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)identityData;
@end

