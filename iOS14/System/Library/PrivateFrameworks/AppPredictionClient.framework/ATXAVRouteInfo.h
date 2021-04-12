/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	BOOL _isExternalRoute;
	NSString* _deviceName;
	NSString* _deviceID;

}

@property (nonatomic,readonly) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL isExternalRoute;               //@synthesize isExternalRoute=_isExternalRoute - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(id)proto;
-(id)encodeAsProto;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isExternalRoute;
-(id)initWithDeviceName:(id)arg1 deviceID:(id)arg2 isExternalRoute:(BOOL)arg3 ;
@end

