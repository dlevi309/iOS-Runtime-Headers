/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)stop;
-(void)start;
-(NSUUID *)UUID;
-(double)time;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSUUID *)parentUUID;
-(id)measurePoint:(id)arg1 ;
-(void)completePoint:(id)arg1 ;
-(id)jsonDict;
-(NSMutableArray *)completedPoints;
-(id)initWithMTT:(id)arg1 ;
-(void)measure:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)measure:(id)arg1 success:(BOOL)arg2 time:(double)arg3 ;
-(void)setCompletedPoints:(NSMutableArray *)arg1 ;
@end

