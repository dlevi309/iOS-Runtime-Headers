/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)modified;
-(id)description;
-(NSString *)machineID;
-(unsigned long long)status;
-(id)initWithMachineID:(id)arg1 status:(unsigned long long)arg2 modified:(id)arg3 ;
@end

