/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUCoreProgress : NSObject <NSSecureCoding> {

	BOOL _isStalled;
	float _portionComplete;
	NSString* _phase;
	double _estimatedTimeRemaining;

}

@property (nonatomic,retain) NSString * phase;                           //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) BOOL isStalled;                             //@synthesize isStalled=_isStalled - In the implementation block
@property (assign,nonatomic) float portionComplete;                      //@synthesize portionComplete=_portionComplete - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(BOOL)isStalled;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(id)summary;
-(void)setIsStalled:(BOOL)arg1 ;
-(float)portionComplete;
-(id)initWithPhase:(id)arg1 isStalled:(BOOL)arg2 portionComplete:(float)arg3 remaining:(double)arg4 ;
-(BOOL)sameProgress:(id)arg1 isStalled:(BOOL)arg2 portion:(float)arg3 remaining:(double)arg4 ;
-(void)setPortionComplete:(float)arg1 ;
@end

