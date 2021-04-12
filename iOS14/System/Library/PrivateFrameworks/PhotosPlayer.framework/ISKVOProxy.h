/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol ISKVOProxyDelegate;
@class NSArray, NSString;

@interface ISKVOProxy : NSObject {

	id _target;
	NSArray* _keyPaths;
	NSString* _identifier;
	id<ISKVOProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ISKVOProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<ISKVOProxyDelegate>)delegate;
-(void)setDelegate:(id<ISKVOProxyDelegate>)arg1 ;
-(void)dealloc;
-(void)stopObservingTarget;
-(void)startObservingTarget;
-(id)initWithTarget:(id)arg1 keyPaths:(id)arg2 identifier:(id)arg3 delegate:(id)arg4 ;
@end

