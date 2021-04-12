/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class MPCPlayerResponse, MPCPlayerPath;

@interface _MPCPlayerCommand : NSObject {

	MPCPlayerResponse* _response;
	MPCPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MPCPlayerResponse * response;                 //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) MPCPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(MPCPlayerResponse *)response;
-(id)initWithResponse:(id)arg1 ;
-(MPCPlayerPath *)playerPath;
-(id)initWithPlayerPath:(id)arg1 ;
@end

