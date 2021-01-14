/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
-(void)sendStopRequest;
@end

