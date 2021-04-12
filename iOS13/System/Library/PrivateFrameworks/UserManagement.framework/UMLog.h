/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@interface UMLog : NSObject {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)error;
+(id)info;
+(id)debug;
+(id)fault;
+(id)standard;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)logPublicFormat:(id)arg1 ;
-(void)logPrivateFormat:(id)arg1 ;
-(void)logMessage:(id)arg1 ;
@end

