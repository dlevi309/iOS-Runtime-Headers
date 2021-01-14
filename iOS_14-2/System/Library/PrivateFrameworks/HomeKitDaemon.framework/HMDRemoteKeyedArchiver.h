/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver, NSString;

@interface HMDRemoteKeyedArchiver : HMFObject {

	NSKeyedArchiver* _archiver;
	NSString* _transportType;

}

@property (nonatomic,retain) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
@property (nonatomic,retain) NSString * transportType;                //@synthesize transportType=_transportType - In the implementation block
-(NSKeyedArchiver *)archiver;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)finishEncoding;
-(void)setTransportType:(NSString *)arg1 ;
-(NSString *)transportType;
-(void)setArchiver:(NSKeyedArchiver *)arg1 ;
-(id)encodedData;
-(void)dealloc;
-(void)__configure;
-(id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)arg1 remoteGateway:(BOOL)arg2 remoteUserIsAdministrator:(BOOL)arg3 user:(id)arg4 dataVersion:(long long)arg5 supportedFeatures:(id)arg6 ;
-(id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)arg1 remoteGateway:(BOOL)arg2 remoteUserIsAdministrator:(BOOL)arg3 user:(id)arg4 supportedFeatures:(id)arg5 ;
@end

