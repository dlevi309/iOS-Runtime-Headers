/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol _MKKVOProxyDelegate;
@interface _MKKVOProxy : NSObject {

	id<_MKKVOProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKKVOProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_MKKVOProxyDelegate>)delegate;
-(void)setDelegate:(id<_MKKVOProxyDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)addObserverForObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 ;
@end

