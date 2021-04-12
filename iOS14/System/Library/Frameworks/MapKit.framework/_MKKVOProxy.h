/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol _MKKVOProxyDelegate;
@interface _MKKVOProxy : NSObject {

	id<_MKKVOProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKKVOProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<_MKKVOProxyDelegate>)delegate;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)addObserverForObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)setDelegate:(id<_MKKVOProxyDelegate>)arg1 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
@end

