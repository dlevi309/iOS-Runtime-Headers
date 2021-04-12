/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

@class NMROrigin;


@protocol NMROriginCommandHandler <NSObject>
@property (nonatomic,readonly) NMROrigin * origin; 
@required
-(NMROrigin *)origin;
-(void)sendMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 launchApp:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

