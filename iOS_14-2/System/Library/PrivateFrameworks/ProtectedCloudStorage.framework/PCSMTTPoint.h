/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PCSMTT, NSDate;

@interface PCSMTTPoint : NSObject <NSSecureCoding> {

	BOOL _success;
	NSString* _name;
	double _time;
	PCSMTT* _mtt;
	NSDate* _start;

}

@property (__weak) PCSMTT * mtt;                 //@synthesize mtt=_mtt - In the implementation block
@property (retain) NSDate * start;               //@synthesize start=_start - In the implementation block
@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) double time;                //@synthesize time=_time - In the implementation block
@property (readonly) BOOL success;               //@synthesize success=_success - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)jsonDict;
-(BOOL)success;
-(PCSMTT *)mtt;
-(double)time;
-(NSDate *)start;
-(void)encodeWithCoder:(id)arg1 ;
-(void)complete:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setMtt:(PCSMTT *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(void)complete:(BOOL)arg1 time:(double)arg2 ;
-(id)initWithMTT:(id)arg1 name:(id)arg2 ;
@end

