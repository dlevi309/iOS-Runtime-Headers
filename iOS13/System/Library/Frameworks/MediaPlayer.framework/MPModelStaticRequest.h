/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelStaticResponse *)staticResponse;
-(void)setStaticResponse:(MPModelStaticResponse *)arg1 ;
@end

