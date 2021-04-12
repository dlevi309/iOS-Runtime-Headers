/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIInteractionContext.h>

@class NSString;

@interface _UIPercentDrivenInteractionEffectChangeContext : NSObject <UIInteractionContext> {

	BOOL _ended;
	double _progress;
	double _maximumProgress;

}

@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double maximumProgress;                //@synthesize maximumProgress=_maximumProgress - In the implementation block
@property (assign,nonatomic) BOOL ended;                            //@synthesize ended=_ended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(BOOL)ended;
-(void)setEnded:(BOOL)arg1 ;
-(double)maximumProgress;
-(void)setMaximumProgress:(double)arg1 ;
@end

