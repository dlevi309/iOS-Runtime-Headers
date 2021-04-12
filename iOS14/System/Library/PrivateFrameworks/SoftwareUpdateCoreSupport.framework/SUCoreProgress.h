/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUCoreProgress : NSObject <NSSecureCoding> {

	BOOL _isStalled;
	float _portionComplete;
	NSString* _phase;
	long long _totalWrittenBytes;
	long long _totalExpectedBytes;
	double _estimatedTimeRemaining;

}

@property (nonatomic,retain) NSString * phase;                           //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) BOOL isStalled;                             //@synthesize isStalled=_isStalled - In the implementation block
@property (assign,nonatomic) float portionComplete;                      //@synthesize portionComplete=_portionComplete - In the implementation block
@property (assign,nonatomic) long long totalWrittenBytes;                //@synthesize totalWrittenBytes=_totalWrittenBytes - In the implementation block
@property (assign,nonatomic) long long totalExpectedBytes;               //@synthesize totalExpectedBytes=_totalExpectedBytes - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(double)estimatedTimeRemaining;
-(void)setIsStalled:(BOOL)arg1 ;
-(BOOL)isStalled;
-(id)description;
-(id)summary;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(float)portionComplete;
-(void)setPortionComplete:(float)arg1 ;
-(id)initWithPhase:(id)arg1 isStalled:(BOOL)arg2 portionComplete:(float)arg3 remaining:(double)arg4 ;
-(id)initWithPhase:(id)arg1 isStalled:(BOOL)arg2 portionComplete:(float)arg3 totalWrittenBytes:(long long)arg4 totalExpectedBytes:(long long)arg5 remaining:(double)arg6 ;
-(long long)totalWrittenBytes;
-(long long)totalExpectedBytes;
-(BOOL)sameProgress:(id)arg1 isStalled:(BOOL)arg2 portion:(float)arg3 remaining:(double)arg4 ;
-(void)setTotalWrittenBytes:(long long)arg1 ;
-(void)setTotalExpectedBytes:(long long)arg1 ;
@end

