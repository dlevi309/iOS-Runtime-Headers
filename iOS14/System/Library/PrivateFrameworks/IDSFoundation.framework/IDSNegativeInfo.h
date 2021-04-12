/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IDSNegativeInfo : NSObject <NSCopying> {

	double _time;
	long long _count;

}

@property (nonatomic,readonly) double time;                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) long long count;              //@synthesize count=_count - In the implementation block
-(double)time;
-(long long)count;
-(id)description;
-(id)initWithTime:(double)arg1 count:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

