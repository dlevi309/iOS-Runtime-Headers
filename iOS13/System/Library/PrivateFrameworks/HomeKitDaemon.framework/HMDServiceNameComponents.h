/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)serviceName;
-(NSString *)format;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)roomName;
-(NSString *)rawServiceName;
-(void)setRawServiceName:(NSString *)arg1 ;
-(id)composedName;
-(id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3 ;
@end

