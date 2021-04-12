/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPLinkMetadata;

@interface LPLinkMetadataObserver : NSObject {

	LPLinkMetadata* _metadata;
	/*^block*/id _callback;
	BOOL _hasScheduledCallback;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopObserving;
-(id)initWithMetadata:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

