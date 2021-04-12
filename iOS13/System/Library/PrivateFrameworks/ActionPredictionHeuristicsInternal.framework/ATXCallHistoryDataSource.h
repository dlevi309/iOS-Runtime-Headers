/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice;

@interface ATXCallHistoryDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)callNewerThan:(double)arg1 showIncoming:(BOOL)arg2 showOutgoing:(BOOL)arg3 missedOnly:(BOOL)arg4 callback:(/*^block*/id)arg5 ;
-(id)_dictForCall:(id)arg1 ;
-(id)_dictForHandle:(id)arg1 ;
@end

