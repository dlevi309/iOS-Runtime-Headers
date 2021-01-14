/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface FMFMapCacheImage : NSObject <NSSecureCoding> {

	long long _count;
	NSString* _path;
	NSDate* _timestamp;

}

@property (assign,nonatomic) long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCount:(long long)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(long long)count;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)boostPriority;
@end

