/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeRemaining:(double)arg1 ;
-(double)timeRemaining;
-(id)description;
-(void)setPercentComplete:(float)arg1 ;
-(float)percentComplete;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDone;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setIsDone:(BOOL)arg1 ;
-(void)setNormalizedPercentComplete:(float)arg1 ;
-(float)normalizedPercentComplete;
@end

