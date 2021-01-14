/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_strategyWithClipping:(BOOL)arg1 ;
+(id)noClipStrategy;
+(id)clipStrategy;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)shouldClipForWindow:(id)arg1 ;
-(id)_init;
-(CGRect)frameWithInterfaceOrientation:(long long)arg1 ;
@end

