/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)interfaceID;
-(CGSize)maximumSize;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithInterfaceID:(unsigned)arg1 maximumSize:(CGSize)arg2 playQueueIndex:(unsigned)arg3 ;
-(unsigned)playQueueIndex;
@end

