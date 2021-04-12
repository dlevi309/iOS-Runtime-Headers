/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)region;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
@end

