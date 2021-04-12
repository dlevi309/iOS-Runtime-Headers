/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <libobjc.A.dylib/NSDiscardableContent.h>

@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {

	BOOL _keepAlive;
	NSString* _artworkIdentifier;
	NSData* _artworkData;

}

@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,retain) NSData * artworkData;                      //@synthesize artworkData=_artworkData - In the implementation block
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(void)setArtworkData:(NSData *)arg1 ;
-(BOOL)isContentDiscarded;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(NSData *)artworkData;
-(BOOL)beginContentAccess;
@end

