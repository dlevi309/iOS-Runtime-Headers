/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupConfigurationRequest : TRRequestMessage {

	NSString* _deviceName;

}

@property (nonatomic,copy) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
@end

