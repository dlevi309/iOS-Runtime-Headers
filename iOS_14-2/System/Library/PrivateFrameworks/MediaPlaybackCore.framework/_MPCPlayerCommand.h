/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class MPCPlayerResponse, MPCPlayerPath;

@interface _MPCPlayerCommand : NSObject {

	MPCPlayerResponse* _response;
	MPCPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MPCPlayerResponse * response;                 //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) MPCPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(id)initWithPlayerPath:(id)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(MPCPlayerResponse *)response;
-(MPCPlayerPath *)playerPath;
@end

