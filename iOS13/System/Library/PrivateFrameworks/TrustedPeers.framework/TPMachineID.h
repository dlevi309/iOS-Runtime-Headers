/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


@class NSString, NSDate;

@interface TPMachineID : NSObject {

	NSString* _machineID;
	unsigned long long _status;
	NSDate* _modified;

}

@property (readonly) NSString * machineID;                   //@synthesize machineID=_machineID - In the implementation block
@property (readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (readonly) NSDate * modified;                      //@synthesize modified=_modified - In the implementation block
-(id)description;
-(unsigned long long)status;
-(NSDate *)modified;
-(NSString *)machineID;
-(id)initWithMachineID:(id)arg1 status:(unsigned long long)arg2 modified:(id)arg3 ;
@end

