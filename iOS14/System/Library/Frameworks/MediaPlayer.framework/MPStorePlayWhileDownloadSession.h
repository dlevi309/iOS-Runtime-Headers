/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(id)description;
-(unsigned long long)downloadToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)purchaseBundle;
-(void)setPurchaseBundle:(NSDictionary *)arg1 ;
@end

