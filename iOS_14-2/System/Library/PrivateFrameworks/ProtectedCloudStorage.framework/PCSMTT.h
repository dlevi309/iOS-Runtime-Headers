/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSMutableArray, NSUUID;

@interface PCSMTT : NSObject <NSSecureCoding> {

	NSDate* _startTime;
	NSMutableArray* _completedPoints;
	NSUUID* _parentUUID;
	NSUUID* _UUID;
	double _time;

}

@property (retain) NSDate * startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSMutableArray * completedPoints;              //@synthesize completedPoints=_completedPoints - In the implementation block
@property (readonly) NSUUID * parentUUID;                         //@synthesize parentUUID=_parentUUID - In the implementation block
@property (readonly) NSUUID * UUID;                               //@synthesize UUID=_UUID - In the implementation block
@property (readonly) double time;                                 //@synthesize time=_time - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)jsonDict;
-(double)time;
-(NSUUID *)UUID;
-(id)init;
-(void)start;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)parentUUID;
-(void)stop;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startTime;
-(id)measurePoint:(id)arg1 ;
-(void)completePoint:(id)arg1 ;
-(NSMutableArray *)completedPoints;
-(id)initWithMTT:(id)arg1 ;
-(void)measure:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)measure:(id)arg1 success:(BOOL)arg2 time:(double)arg3 ;
-(void)setCompletedPoints:(NSMutableArray *)arg1 ;
@end

