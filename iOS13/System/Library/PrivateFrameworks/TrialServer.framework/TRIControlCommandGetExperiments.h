/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRIControlCommand.h>

@class NSArray, NSString;

@interface TRIControlCommandGetExperiments : NSObject <TRIControlCommand> {

	NSArray* _result;

}

@property (nonatomic,retain) NSArray * result;                      //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)command;
-(BOOL)run;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)result;
-(void)setResult:(NSArray *)arg1 ;
@end

