/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSNumber;

@interface NMSAudiobookReferenceObject : NSObject {

	NSNumber* _audiobookIdentifier;
	unsigned long long _downloadLimit;

}

@property (nonatomic,readonly) NSNumber * audiobookIdentifier;              //@synthesize audiobookIdentifier=_audiobookIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long downloadLimit;              //@synthesize downloadLimit=_downloadLimit - In the implementation block
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)audiobookIdentifier;
-(unsigned long long)downloadLimit;
-(id)initWithAudiobookIdentifier:(id)arg1 downloadLimit:(unsigned long long)arg2 ;
-(id)audiobookMediaItem;
-(void)setDownloadLimit:(unsigned long long)arg1 ;
@end

