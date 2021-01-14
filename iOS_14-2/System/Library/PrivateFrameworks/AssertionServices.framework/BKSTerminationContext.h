/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSTerminationContext : NSObject <NSCopying> {

	long long _exceptionCode;
	unsigned long long _reportType;
	NSString* _explanation;

}

@property (assign,nonatomic) long long exceptionCode;                    //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (assign,nonatomic) unsigned long long reportType;              //@synthesize reportType=_reportType - In the implementation block
@property (nonatomic,copy) NSString * explanation;                       //@synthesize explanation=_explanation - In the implementation block
+(id)context;
+(id)terminationAssertionContext;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setReportType:(unsigned long long)arg1 ;
-(unsigned long long)reportType;
-(void)setExceptionCode:(long long)arg1 ;
-(long long)exceptionCode;
-(BOOL)isEqualToTerminationContext:(id)arg1 ;
-(NSString *)explanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

