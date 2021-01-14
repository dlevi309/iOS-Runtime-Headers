/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDServiceNameComponents : HMFObject {

	NSString* _rawServiceName;
	NSString* _serviceName;
	NSString* _roomName;
	NSString* _format;

}

@property (nonatomic,retain) NSString * rawServiceName;              //@synthesize rawServiceName=_rawServiceName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * roomName;                    //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,retain) NSString * format;                      //@synthesize format=_format - In the implementation block
+(id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3 ;
+(id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 ;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setRawServiceName:(NSString *)arg1 ;
-(NSString *)rawServiceName;
-(NSString *)roomName;
-(void)setServiceName:(NSString *)arg1 ;
-(id)composedName;
-(id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3 ;
@end

