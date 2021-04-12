/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString;

@interface CKLTrafficLogMessageFragment : NSObject {

	unsigned long long _type;
	NSString* _uuid;
	long long _seqNum;
	NSString* _dataString;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) long long seqNum;                     //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,readonly) NSString * dataString;                //@synthesize dataString=_dataString - In the implementation block
-(id)description;
-(unsigned long long)type;
-(NSString *)uuid;
-(long long)seqNum;
-(id)initWithMessage:(id)arg1 ;
-(NSString *)dataString;
@end

