/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setDataToSign:(NSData *)arg1 ;
-(void)setValidityInMinutes:(long long)arg1 ;
-(void)setUseSCRT:(BOOL)arg1 ;
-(NSData *)dataToSign;
-(long long)validityInMinutes;
-(BOOL)useSCRT;
@end

