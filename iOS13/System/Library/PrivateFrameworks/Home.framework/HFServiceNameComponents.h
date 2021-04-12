/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString;

@interface HFServiceNameComponents : NSObject {

	NSString* _rawServiceName;
	NSString* _serviceName;
	NSString* _roomName;

}

@property (nonatomic,retain) NSString * rawServiceName;                //@synthesize rawServiceName=_rawServiceName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * roomName;                      //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,readonly) NSString * composedString; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)roomName;
-(NSString *)composedString;
-(id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 ;
-(NSString *)rawServiceName;
-(void)setRawServiceName:(NSString *)arg1 ;
@end

