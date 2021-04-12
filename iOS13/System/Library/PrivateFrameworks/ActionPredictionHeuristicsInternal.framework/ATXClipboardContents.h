/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice, PBServerConnection;

@interface ATXClipboardContents : NSObject {

	ATXHeuristicDevice* _device;
	PBServerConnection* _pasteboardServerConnection;

}
-(id)initWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 pasteboardConnection:(id)arg2 ;
-(void)contentsWithCallback:(/*^block*/id)arg1 ;
@end

