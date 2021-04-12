/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, IKDOMNode, NSDate;


@protocol IKJSDOMEvent <JSExport>
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IKDOMNode * target; 
@property (nonatomic,retain,readonly) IKDOMNode * currentTarget; 
@property (nonatomic,readonly) long long eventPhase; 
@property (nonatomic,readonly) BOOL bubbles; 
@property (nonatomic,readonly) BOOL cancelable; 
@property (nonatomic,readonly) NSDate * timeStamp; 
@property (nonatomic,readonly) BOOL defaultPrevented; 
@required
-(NSString *)type;
-(IKDOMNode *)target;
-(NSDate *)timeStamp;
-(IKDOMNode *)currentTarget;
-(long long)eventPhase;
-(BOOL)bubbles;
-(BOOL)cancelable;
-(BOOL)defaultPrevented;
-(void)stopPropagation;
-(void)preventDefault;
-(void)stopImmediatePropagation;
-(id)initWithType:(id)arg1 eventInit:(id)arg2;

@end

