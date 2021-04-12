/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)ended;
-(double)progress;
-(void)setEnded:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)maximumProgress;
-(void)setMaximumProgress:(double)arg1 ;
@end

