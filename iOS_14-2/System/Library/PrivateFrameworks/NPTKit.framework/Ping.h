/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSDictionary;

@interface Ping : NSObject <NSSecureCoding, NSCopying> {

	BOOL _wasSuccessful;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,retain) NSDate * startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (readonly) double latency; 
@property (assign) BOOL wasSuccessful;                                 //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)latency;
-(NSDictionary *)dictionary;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wasSuccessful;
-(void)setWasSuccessful:(BOOL)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startTime;
@end

