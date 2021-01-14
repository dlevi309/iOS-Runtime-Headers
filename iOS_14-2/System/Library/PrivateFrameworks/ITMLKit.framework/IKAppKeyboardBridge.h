/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, JSValue;


@protocol IKAppKeyboardBridge <NSObject>
@property (setter=setJSText:,nonatomic,copy) NSString * jsText; 
@property (setter=setJSSource:,nonatomic,copy) NSString * jsSource; 
@property (setter=setJSHints:,nonatomic,copy) JSValue * jsHints; 
@required
-(NSString *)jsText;
-(JSValue *)jsHints;
-(void)setJSText:(id)arg1;
-(void)setJSHints:(id)arg1;
-(NSString *)jsSource;
-(void)setJSSource:(id)arg1;

@end

