/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_os_log;
@class NSObject, NSString;

@interface CKLogFacilityWrapper : NSObject {

	NSObject*<OS_os_log> _facility;
	NSString* _facilityName;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> facility;              //@synthesize facility=_facility - In the implementation block
@property (nonatomic,readonly) NSString * facilityName;                    //@synthesize facilityName=_facilityName - In the implementation block
-(NSString *)facilityName;
-(id)initWithFacility:(id)arg1 facilityName:(id)arg2 ;
-(NSObject*<OS_os_log>)facility;
@end

