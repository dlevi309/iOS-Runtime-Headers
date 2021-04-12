/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {

	BOOL _extendsLeft;
	NSDate* _boundaryDate;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_start;
-(void)_cancel;
-(void)_extendLeft;
-(void)_extendRight;
-(void)_invokeHandlerWithEntries:(id)arg1 ;
-(void)setExtendsLeftFromDate:(id)arg1 ;
-(void)setExtendsRightFromDate:(id)arg1 ;
@end

