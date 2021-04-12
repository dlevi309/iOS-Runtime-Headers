/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPChangeDetails, MPModelStoreBrowseResponseParser;

@interface MPModelStoreBrowseResponse : MPModelResponse {

	MPChangeDetails* _changeDetails;
	MPModelStoreBrowseResponseParser* _parser;

}

@property (nonatomic,retain) MPModelStoreBrowseResponseParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) MPChangeDetails * changeDetails;                        //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalContentItems; 
-(MPModelStoreBrowseResponseParser *)parser;
-(void)setParser:(MPModelStoreBrowseResponseParser *)arg1 ;
-(BOOL)hasAdditionalContentItems;
-(MPChangeDetails *)changeDetails;
-(void)setChangeDetails:(MPChangeDetails *)arg1 ;
@end

