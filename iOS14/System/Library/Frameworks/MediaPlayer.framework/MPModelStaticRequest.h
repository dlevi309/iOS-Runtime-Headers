/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class MPModelStaticResponse;

@interface MPModelStaticRequest : MPModelRequest {

	MPModelStaticResponse* _staticResponse;

}

@property (nonatomic,retain) MPModelStaticResponse * staticResponse;              //@synthesize staticResponse=_staticResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelStaticResponse *)staticResponse;
-(void)setStaticResponse:(MPModelStaticResponse *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

