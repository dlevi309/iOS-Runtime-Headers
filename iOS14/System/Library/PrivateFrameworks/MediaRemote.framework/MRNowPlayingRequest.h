/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class MRPlayerPath;

@interface MRNowPlayingRequest : NSObject {

	MRPlayerPath* _playerPath;

}

@property (nonatomic,copy,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(id)initWithPlayerPath:(id)arg1 ;
-(id)lastPlayingDateWithError:(id*)arg1 ;
-(void)requestLastPlayingDateOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MRPlayerPath *)playerPath;
-(id)initWithOrigin:(id)arg1 ;
@end

