/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUOperationProgress : NSObject <NSSecureCoding, NSCopying> {

	NSString* _phase;
	float _percentComplete;
	float _normalizedPercentComplete;
	double _timeRemaining;
	BOOL _isDone;

}

@property (nonatomic,retain) NSString * phase;                             //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) float percentComplete;                        //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) float normalizedPercentComplete;              //@synthesize normalizedPercentComplete=_normalizedPercentComplete - In the implementation block
@property (assign,nonatomic) double timeRemaining;                         //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign,nonatomic) BOOL isDone;                                  //@synthesize isDone=_isDone - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phase;
-(float)percentComplete;
-(void)setPhase:(NSString *)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(BOOL)isDone;
-(void)setTimeRemaining:(double)arg1 ;
-(double)timeRemaining;
-(void)setNormalizedPercentComplete:(float)arg1 ;
-(void)setIsDone:(BOOL)arg1 ;
-(float)normalizedPercentComplete;
@end

