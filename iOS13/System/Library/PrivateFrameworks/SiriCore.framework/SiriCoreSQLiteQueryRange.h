/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)limit;
-(unsigned long long)offset;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
@end
