/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXGAXResponder.h>

@protocol PXGAXResponder;
@class NSMutableArray, NSString;

@interface PXGAXCoalescingResponder : NSObject <PXGAXResponder> {

	NSMutableArray* _pendingAXEventBlocks;
	BOOL _pauseEventDelivery;
	id<PXGAXResponder> axNextResponder;

}

@property (assign,nonatomic) BOOL pauseEventDelivery;                                //@synthesize pauseEventDelivery=_pauseEventDelivery - In the implementation block
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAxNextResponder:(id<PXGAXResponder>)arg1 ;
-(id)axContainingViewForAXGroup:(id)arg1 ;
-(BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3 ;
-(id<PXGAXResponder>)axNextResponder;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)setPauseEventDelivery:(BOOL)arg1 ;
-(void)_notifyResponder:(/*^block*/id)arg1 ;
-(void)_distributeEvents;
-(BOOL)pauseEventDelivery;
@end

