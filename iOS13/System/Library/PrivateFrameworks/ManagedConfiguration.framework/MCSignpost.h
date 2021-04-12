/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSDate *)timestamp;
-(NSString *)feature;
-(NSString *)process;
-(id)initWithProcess:(id)arg1 type:(unsigned long long)arg2 feature:(id)arg3 timestamp:(id)arg4 ;
@end

