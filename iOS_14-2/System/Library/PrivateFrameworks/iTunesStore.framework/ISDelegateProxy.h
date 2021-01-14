/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSLock;

@interface ISDelegateProxy : NSObject {

	id _delegate;
	NSLock* _lock;
	BOOL _shouldMessageMainThread;

}
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(void)setShouldMessageMainThread:(BOOL)arg1 ;
-(void)sendInvocationToDelegate:(id)arg1 ;
@end

