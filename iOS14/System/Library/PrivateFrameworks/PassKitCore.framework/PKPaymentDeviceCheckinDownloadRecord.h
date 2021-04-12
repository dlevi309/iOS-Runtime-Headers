/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSData;

@interface PKPaymentDeviceCheckinDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {

	NSString* _region;
	NSUUID* _identifier;
	NSData* _responseData;

}

@property (nonatomic,retain) NSString * region;                  //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * responseData;              //@synthesize responseData=_responseData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)region;
-(void)setRegion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResponseData:(NSData *)arg1 ;
-(NSData *)responseData;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

