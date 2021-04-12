/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRequest.h>

@class MPModelRequest;

@interface MPModelShimRequest : MPRequest {

	MPModelRequest* _modelRequest;

}

@property (nonatomic,retain) MPModelRequest * modelRequest;              //@synthesize modelRequest=_modelRequest - In the implementation block
+(Class)responseClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)middlewareClasses;
-(MPModelRequest *)modelRequest;
-(void)setModelRequest:(MPModelRequest *)arg1 ;
@end

