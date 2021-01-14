/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPModelRequest *)modelRequest;
-(id)description;
-(void)setModelRequest:(MPModelRequest *)arg1 ;
-(id)middlewareClasses;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

