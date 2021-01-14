/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface SFPasswordSharingInfo : NSObject <NSSecureCoding> {

	NSNumber* _channel;
	NSString* _networkName;
	NSString* _psk;

}

@property (nonatomic,retain) NSNumber * channel;                  //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * networkName;              //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSString * psk;                      //@synthesize psk=_psk - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)networkName;
-(NSString *)psk;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNetworkName:(NSString *)arg1 ;
-(void)setChannel:(NSNumber *)arg1 ;
-(NSNumber *)channel;
-(void)setPsk:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

