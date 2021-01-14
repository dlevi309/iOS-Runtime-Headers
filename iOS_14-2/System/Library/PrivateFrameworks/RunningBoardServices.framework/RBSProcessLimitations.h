/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSString;

@interface RBSProcessLimitations : NSObject <RBSXPCSecureCoding> {

	double _runTime;

}

@property (assign,nonatomic) double runTime;                        //@synthesize runTime=_runTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(double)runTime;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(void)setRunTime:(double)arg1 ;
-(NSString *)description;
@end

