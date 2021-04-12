/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@interface _OSLogEventStoreTimeRef : NSObject {

	unsigned char _uuid[16];
	unsigned long long _ct;

}

@property (nonatomic,readonly) const char* UUID; 
@property (nonatomic,readonly) unsigned long long continuousTime;              //@synthesize ct=_ct - In the implementation block
+(id)timeRef;
-(id)initWithDictionary:(id)arg1 ;
-(const char*)UUID;
-(unsigned long long)continuousTime;
-(id)initWithUUID:(unsigned char)arg1 continuous:(unsigned long long)arg2 ;
@end

