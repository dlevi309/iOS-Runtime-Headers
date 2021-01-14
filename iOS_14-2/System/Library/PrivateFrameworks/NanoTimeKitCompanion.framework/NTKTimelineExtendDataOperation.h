/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {

	NSDate* _boundaryDate;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)setHandler:(id)arg1 ;
-(void)_start;
-(void)_cancel;
-(id)handler;
-(void)_extendRight;
-(void)_invokeHandlerWithEntries:(id)arg1 ;
-(void)setExtendsRightFromDate:(id)arg1 ;
@end

