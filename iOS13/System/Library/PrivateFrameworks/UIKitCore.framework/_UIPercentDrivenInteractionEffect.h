/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIInteractionEffect.h>

@class NSString;

@interface _UIPercentDrivenInteractionEffect : NSObject <UIInteractionEffect> {

	/*^block*/id _progressBlock;

}

@property (nonatomic,copy) id progressBlock;                        //@synthesize progressBlock=_progressBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 ;
@end

