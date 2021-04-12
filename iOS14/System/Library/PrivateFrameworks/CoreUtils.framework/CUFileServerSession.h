/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUFileServerSession : NSObject {

	char _dirPath[1024];
	SCD_Struct_CU23* _dirStream;
	unsigned long long _lastRequestTicks;
	unsigned long long _sessionID;

}

@property (assign,nonatomic) SCD_Struct_CU23* dirStream;                       //@synthesize dirStream=_dirStream - In the implementation block
@property (assign,nonatomic) unsigned long long lastRequestTicks;              //@synthesize lastRequestTicks=_lastRequestTicks - In the implementation block
@property (assign,nonatomic) unsigned long long sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setDirStream:(SCD_Struct_CU23*)arg1 ;
-(unsigned long long)lastRequestTicks;
-(void)setLastRequestTicks:(unsigned long long)arg1 ;
-(SCD_Struct_CU23*)dirStream;
@end

