/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPLinkMetadata;

@interface LPLinkMetadataObserver : NSObject {

	LPLinkMetadata* _metadata;
	/*^block*/id _callback;
	BOOL _hasScheduledCallback;

}
-(void)stopObserving;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithMetadata:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

