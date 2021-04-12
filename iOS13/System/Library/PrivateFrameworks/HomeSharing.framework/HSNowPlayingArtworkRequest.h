/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSNowPlayingArtworkRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _playQueueIndex;
	CGSize _maximumSize;

}

@property (nonatomic,readonly) unsigned interfaceID;                 //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) CGSize maximumSize;                   //@synthesize maximumSize=_maximumSize - In the implementation block
@property (nonatomic,readonly) unsigned playQueueIndex;              //@synthesize playQueueIndex=_playQueueIndex - In the implementation block
-(CGSize)maximumSize;
-(unsigned)interfaceID;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithInterfaceID:(unsigned)arg1 maximumSize:(CGSize)arg2 playQueueIndex:(unsigned)arg3 ;
-(unsigned)playQueueIndex;
@end

