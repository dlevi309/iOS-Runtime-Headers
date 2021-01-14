/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
*/

@class RCPSyntheticEventStream, NSString;


@protocol CRNScrollTestParameters <NSObject>
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy,readonly) id completionHandler; 
@property (nonatomic,copy) NSString * testName; 
@required
-(RCPSyntheticEventStream *)eventStream;
-(id)completionHandler;
-(void)setTestName:(id)arg1;
-(NSString *)testName;

@end

