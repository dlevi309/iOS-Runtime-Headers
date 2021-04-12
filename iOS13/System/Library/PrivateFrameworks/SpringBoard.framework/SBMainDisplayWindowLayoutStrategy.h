/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBWindowLayoutStrategy.h>

@class NSString;

@interface SBMainDisplayWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy> {

	BOOL _clip;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)noClipStrategy;
+(id)_strategyWithClipping:(BOOL)arg1 ;
+(id)clipStrategy;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(CGRect)frameWithInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldClipForWindow:(id)arg1 ;
@end

