/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface MCSignpost : NSObject <NSCopying> {

	NSString* _process;
	unsigned long long _type;
	NSString* _feature;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) NSString * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * feature;              //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)process;
-(NSString *)feature;
-(id)initWithProcess:(id)arg1 type:(unsigned long long)arg2 feature:(id)arg3 timestamp:(id)arg4 ;
-(NSDate *)timestamp;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

