/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

@class NMROrigin;


@protocol NMROriginCommandHandler <NSObject>
@property (nonatomic,readonly) NMROrigin * origin; 
@required
-(NMROrigin *)origin;
-(void)sendMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 userInitiated:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

