/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)seqNum;
-(NSString *)uuid;
-(id)description;
-(id)initWithMessage:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)dataString;
@end

