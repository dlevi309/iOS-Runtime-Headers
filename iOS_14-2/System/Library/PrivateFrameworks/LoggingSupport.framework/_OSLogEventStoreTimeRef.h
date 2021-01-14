/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@interface _OSLogEventStoreTimeRef : NSObject {

	unsigned char _uuid[16];
	unsigned long long _ct;

}

@property (nonatomic,readonly) const char* UUID; 
@property (nonatomic,readonly) unsigned long long continuousTime;              //@synthesize ct=_ct - In the implementation block
+(id)timeRef;
-(id)initWithUUID:(unsigned char)arg1 continuous:(unsigned long long)arg2 ;
-(const char*)UUID;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)continuousTime;
@end

