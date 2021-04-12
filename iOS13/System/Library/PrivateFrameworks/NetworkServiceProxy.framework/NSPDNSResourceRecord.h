/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@class NSString;

@interface NSPDNSResourceRecord : NSObject {

	long long _type;
	NSString* _name;
	long long _recordClass;
	unsigned long long _timeToLive;
	unsigned long long _dataLength;
	NSString* _resourceString;

}

@property (readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (readonly) long long recordClass;                      //@synthesize recordClass=_recordClass - In the implementation block
@property (readonly) unsigned long long timeToLive;              //@synthesize timeToLive=_timeToLive - In the implementation block
@property (readonly) unsigned long long dataLength;              //@synthesize dataLength=_dataLength - In the implementation block
@property (readonly) NSString * resourceString;                  //@synthesize resourceString=_resourceString - In the implementation block
+(id)typeToString:(long long)arg1 ;
-(NSString *)name;
-(long long)type;
-(unsigned long long)timeToLive;
-(unsigned long long)dataLength;
-(id)initFromByteParser:(id)arg1 ;
-(long long)recordClass;
-(NSString *)resourceString;
-(id)copyStateDictionary;
@end

