/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice;

@interface ATXCallHistoryDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)callNewerThan:(double)arg1 showIncoming:(BOOL)arg2 showOutgoing:(BOOL)arg3 missedOnly:(BOOL)arg4 callback:(/*^block*/id)arg5 ;
-(id)_dictForHandle:(id)arg1 ;
-(id)_dictForCall:(id)arg1 ;
@end

