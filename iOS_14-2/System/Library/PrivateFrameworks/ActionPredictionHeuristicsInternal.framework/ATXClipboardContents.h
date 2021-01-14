/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice, PBServerConnection;

@interface ATXClipboardContents : NSObject {

	ATXHeuristicDevice* _device;
	PBServerConnection* _pasteboardServerConnection;

}
+(void)_observeLocalPasteboard;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 pasteboardConnection:(id)arg2 ;
-(void)contentsWithCallback:(/*^block*/id)arg1 ;
@end

