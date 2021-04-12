/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXViewportChangeListener.h>

@protocol SXMediaPlaybackDelegate;
@class SXViewport, NSString;

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener> {

	id<SXMediaPlaybackDelegate> _mediaPlaybackDelegate;
	SXViewport* _viewport;

}

@property (assign,nonatomic,__weak) id<SXMediaPlaybackDelegate> mediaPlaybackDelegate;              //@synthesize mediaPlaybackDelegate=_mediaPlaybackDelegate - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                               //@synthesize viewport=_viewport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(id)initWithViewport:(id)arg1 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(id<SXMediaPlaybackDelegate>)mediaPlaybackDelegate;
-(void)setMediaPlaybackDelegate:(id<SXMediaPlaybackDelegate>)arg1 ;
-(void)registerMediaPlayBack:(id)arg1 ;
@end

