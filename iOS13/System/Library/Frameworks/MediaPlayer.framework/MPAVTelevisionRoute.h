/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {

	MPAVRouteConnection* _connection;
	void* _television;

}

@property (nonatomic,readonly) void* television;              //@synthesize television=_television - In the implementation block
-(void)dealloc;
-(id)connection;
-(long long)routeType;
-(id)routeUID;
-(long long)routeSubtype;
-(id)initWithTelevision:(void*)arg1 ;
-(void*)television;
@end

