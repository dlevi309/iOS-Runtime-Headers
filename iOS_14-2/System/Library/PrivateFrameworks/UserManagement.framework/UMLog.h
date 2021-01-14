/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@interface UMLog : NSObject {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)info;
+(id)error;
+(id)debug;
+(id)standard;
+(id)fault;
-(void)logPublicFormat:(id)arg1 ;
-(void)logMessage:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)logPrivateFormat:(id)arg1 ;
@end

