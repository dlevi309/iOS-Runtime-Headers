/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying> {

	unsigned long long _limit;
	unsigned long long _offset;

}

@property (nonatomic,readonly) unsigned long long limit;               //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(id)initWithLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(unsigned long long)offset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
@end

