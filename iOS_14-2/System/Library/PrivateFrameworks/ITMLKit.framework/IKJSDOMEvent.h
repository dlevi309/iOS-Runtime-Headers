/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)cancelable;
-(NSDate *)timeStamp;
-(void)stopPropagation;
-(void)preventDefault;
-(BOOL)bubbles;
-(NSString *)type;
-(IKDOMNode *)target;
-(IKDOMNode *)currentTarget;
-(long long)eventPhase;
-(BOOL)defaultPrevented;
-(void)stopImmediatePropagation;
-(id)initWithType:(id)arg1 eventInit:(id)arg2;

@end

