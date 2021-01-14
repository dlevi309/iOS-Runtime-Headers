/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUBProgress : NSObject <NSSecureCoding> {

	BOOL _isDone;
	float _portionComplete;
	NSString* _phase;
	double _estimatedTimeRemaining;

}

@property (nonatomic,retain) NSString * phase;                           //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) float portionComplete;                      //@synthesize portionComplete=_portionComplete - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (assign,nonatomic) BOOL isDone;                                //@synthesize isDone=_isDone - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(double)estimatedTimeRemaining;
-(id)description;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDone;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(void)setIsDone:(BOOL)arg1 ;
-(float)portionComplete;
-(void)setPortionComplete:(float)arg1 ;
@end

