/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)encodedData;
-(void)finishEncoding;
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
-(NSKeyedArchiver *)archiver;
-(void)setArchiver:(NSKeyedArchiver *)arg1 ;
-(void)__configure;
-(id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)arg1 remoteGateway:(BOOL)arg2 remoteUserIsAdministrator:(BOOL)arg3 user:(id)arg4 dataVersion:(long long)arg5 supportedFeatures:(id)arg6 ;
-(id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)arg1 remoteGateway:(BOOL)arg2 remoteUserIsAdministrator:(BOOL)arg3 user:(id)arg4 supportedFeatures:(id)arg5 ;
@end

