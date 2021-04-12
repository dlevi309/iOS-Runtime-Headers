/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)operation;
-(NSDate *)timestamp;
-(NSString *)altDSID;
-(NSString *)serialNumber;
-(unsigned long long)_convertOperationToEnum:(id)arg1 ;
-(id)initWithResponseBody:(id)arg1 ;
-(NSString *)machineID;
-(NSArray *)machineIDs;
@end

