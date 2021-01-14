/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class NSString, NSArray, NSDate;

@interface AKDeviceListDeltaMessagePayload : NSObject {

	NSString* _altDSID;
	unsigned long long _operation;
	NSString* _machineID;
	NSArray* _machineIDs;
	NSString* _serialNumber;
	NSDate* _timestamp;

}

@property (copy,readonly) NSString * altDSID;                   //@synthesize altDSID=_altDSID - In the implementation block
@property (readonly) unsigned long long operation;              //@synthesize operation=_operation - In the implementation block
@property (copy,readonly) NSString * machineID;                 //@synthesize machineID=_machineID - In the implementation block
@property (copy,readonly) NSArray * machineIDs;                 //@synthesize machineIDs=_machineIDs - In the implementation block
@property (copy,readonly) NSString * serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (copy,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)serialNumber;
-(unsigned long long)operation;
-(NSDate *)timestamp;
-(NSString *)altDSID;
-(NSArray *)machineIDs;
-(unsigned long long)_convertOperationToEnum:(id)arg1 ;
-(id)initWithResponseBody:(id)arg1 ;
-(NSString *)machineID;
@end

