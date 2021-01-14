/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HSResponse.h>

@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse {

	NSData* _artworkData;
	NSString* _artworkMIMEType;

}

@property (nonatomic,retain) NSData * artworkData;                    //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,retain) NSString * artworkMIMEType;              //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
-(void)setArtworkData:(NSData *)arg1 ;
-(NSData *)artworkData;
-(void)setArtworkMIMEType:(NSString *)arg1 ;
-(NSString *)artworkMIMEType;
@end

