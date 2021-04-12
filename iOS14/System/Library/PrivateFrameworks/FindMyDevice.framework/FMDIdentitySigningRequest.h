/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding> {

	BOOL _useSCRT;
	NSData* _dataToSign;
	long long _validityInMinutes;

}

@property (nonatomic,retain) NSData * dataToSign;                      //@synthesize dataToSign=_dataToSign - In the implementation block
@property (assign,nonatomic) BOOL useSCRT;                             //@synthesize useSCRT=_useSCRT - In the implementation block
@property (assign,nonatomic) long long validityInMinutes;              //@synthesize validityInMinutes=_validityInMinutes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)useSCRT;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataToSign;
-(void)setDataToSign:(NSData *)arg1 ;
-(void)setValidityInMinutes:(long long)arg1 ;
-(void)setUseSCRT:(BOOL)arg1 ;
-(long long)validityInMinutes;
@end

