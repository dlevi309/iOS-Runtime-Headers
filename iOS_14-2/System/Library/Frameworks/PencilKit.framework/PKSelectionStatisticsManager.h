/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKSelectionStatisticsSession;

@interface PKSelectionStatisticsManager : NSObject {

	PKSelectionStatisticsSession* _selectionSession;
	CGPoint _lastContentOffset;

}
+(id)sharedStatisticsManager;
-(void)logSelectionAction:(long long)arg1 ;
-(void)recordSmartSelectionEventWithType:(long long)arg1 contentType:(long long)arg2 gestureInvoked:(long long)arg3 ;
-(void)logScrollEventWithContentOffset:(CGPoint)arg1 ;
-(void)logEndSelectionSessionIfNecessary;
-(void)recordDidMakeSelectionWithType:(long long)arg1 ;
-(void)_endSelectionSession;
-(void)_recordSelectionSession:(id)arg1 ;
@end

