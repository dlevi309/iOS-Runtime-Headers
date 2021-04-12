/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSUUID, NSDate, NSString, HMDHome;

@interface HMDUserCloudShareRequest : NSObject {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSString* _containerID;
	HMDHome* _home;

}

@property (readonly) NSUUID * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSString * containerID;              //@synthesize containerID=_containerID - In the implementation block
@property (__weak,readonly) HMDHome * home;               //@synthesize home=_home - In the implementation block
-(NSString *)containerID;
-(NSDate *)startDate;
-(NSUUID *)identifier;
-(HMDHome *)home;
-(id)initWithStartDate:(id)arg1 containerID:(id)arg2 home:(id)arg3 ;
@end

