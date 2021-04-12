/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProgressBlock:(id)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(id)progressBlock;
-(id)initWithProgressBlock:(/*^block*/id)arg1 ;
@end

