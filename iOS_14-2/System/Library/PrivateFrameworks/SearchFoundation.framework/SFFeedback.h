/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFFeedback : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _queryId;

}

@property (readonly) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;              //@synthesize queryId=_queryId - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)queryId;
-(id)init;
-(unsigned long long)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

