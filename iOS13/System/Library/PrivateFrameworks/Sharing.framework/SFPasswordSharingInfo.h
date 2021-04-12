/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)channel;
-(void)setChannel:(NSNumber *)arg1 ;
-(void)setNetworkName:(NSString *)arg1 ;
-(void)setPsk:(NSString *)arg1 ;
-(NSString *)networkName;
-(NSString *)psk;
@end

