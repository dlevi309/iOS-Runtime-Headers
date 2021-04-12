/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)testName;
-(void)setTestName:(id)arg1;

@end

