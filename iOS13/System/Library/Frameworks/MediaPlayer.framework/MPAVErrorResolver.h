/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPAVErrorResolverDelegate;
@interface MPAVErrorResolver : NSObject {

	id<MPAVErrorResolverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPAVErrorResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MPAVErrorResolverDelegate>)delegate;
-(void)setDelegate:(id<MPAVErrorResolverDelegate>)arg1 ;
-(void)resolveError:(id)arg1 ;
-(void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2 ;
@end

