/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <Foundation/NSProgress.h>

@protocol BRProgressProxyDelegate;
@class NSURL;

@interface BRProgressProxy : NSProgress {

	NSURL* _url;
	id _globalProgressSubscriber;
	id<BRProgressProxyDelegate> _delegate;

}

@property (__weak) id<BRProgressProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(id<BRProgressProxyDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<BRProgressProxyDelegate>)arg1 ;
-(void)dealloc;
@end

