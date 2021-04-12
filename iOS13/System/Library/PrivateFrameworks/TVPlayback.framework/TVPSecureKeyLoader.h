/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPSecureKeyLoaderDelegate;
@class TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyLoader : NSObject {

	id<TVPSecureKeyLoaderDelegate> _delegate;
	TVPPlaybackReportingEventCollection* _eventCollection;

}

@property (assign,nonatomic,__weak) id<TVPSecureKeyLoaderDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVPPlaybackReportingEventCollection * eventCollection;              //@synthesize eventCollection=_eventCollection - In the implementation block
-(id<TVPSecureKeyLoaderDelegate>)delegate;
-(void)setDelegate:(id<TVPSecureKeyLoaderDelegate>)arg1 ;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
-(void)sendStopRequest;
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
@end

