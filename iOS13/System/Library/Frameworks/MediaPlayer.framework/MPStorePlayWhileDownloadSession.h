/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface MPStorePlayWhileDownloadSession : NSObject <NSCopying> {

	NSURL* _destinationURL;
	unsigned long long _downloadToken;
	NSDictionary* _purchaseBundle;
	NSURL* _sourceURL;

}

@property (nonatomic,copy) NSURL * destinationURL;                          //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) unsigned long long downloadToken;              //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,copy) NSDictionary * purchaseBundle;                   //@synthesize purchaseBundle=_purchaseBundle - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                               //@synthesize sourceURL=_sourceURL - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(unsigned long long)downloadToken;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(NSDictionary *)purchaseBundle;
-(void)setPurchaseBundle:(NSDictionary *)arg1 ;
@end

