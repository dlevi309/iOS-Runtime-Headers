/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPAVErrorResolverDelegate;
@interface MPAVErrorResolver : NSObject {

	id<MPAVErrorResolverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPAVErrorResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MPAVErrorResolverDelegate>)delegate;
-(void)resolveError:(id)arg1 ;
-(void)setDelegate:(id<MPAVErrorResolverDelegate>)arg1 ;
-(void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2 ;
@end

