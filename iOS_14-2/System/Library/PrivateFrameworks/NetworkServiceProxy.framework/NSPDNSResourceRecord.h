/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)dataLength;
-(NSString *)name;
-(unsigned long long)timeToLive;
-(id)initFromByteParser:(id)arg1 ;
-(long long)recordClass;
-(NSString *)resourceString;
-(long long)type;
-(id)copyStateDictionary;
@end

