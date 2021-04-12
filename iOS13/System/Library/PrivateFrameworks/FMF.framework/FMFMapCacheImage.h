/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)boostPriority;
@end

