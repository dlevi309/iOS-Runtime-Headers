/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {

	MPAVRouteConnection* _connection;
	void* _television;

}

@property (nonatomic,readonly) void* television;              //@synthesize television=_television - In the implementation block
-(id)routeUID;
-(long long)routeType;
-(long long)routeSubtype;
-(id)connection;
-(void*)television;
-(void)dealloc;
-(id)initWithTelevision:(void*)arg1 ;
@end

