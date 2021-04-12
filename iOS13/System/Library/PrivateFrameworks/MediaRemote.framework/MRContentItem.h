/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/_MRContentItemProtobuf.h>

@class MRContentItemMetadata;

@interface MRContentItem : _MRContentItemProtobuf

@property (nonatomic,readonly) MRContentItemMetadata * itemMetadata; 
@property (nonatomic,readonly) BOOL hasCurrentLanguageOptions; 
@property (nonatomic,readonly) BOOL hasAvailableLanguageOptions; 
+(void)initialize;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(void)setSections:(id)arg1 ;
-(void)setInfo:(id)arg1 ;
-(void)setArtworkData:(id)arg1 ;
-(void)setAvailableLanguageOptions:(id)arg1 ;
-(void)setCurrentLanguageOptions:(id)arg1 ;
-(void)setLyrics:(id)arg1 ;
-(id)customDictionaryRepresentation;
-(MRContentItemMetadata *)itemMetadata;
-(BOOL)hasCurrentLanguageOptions;
-(BOOL)hasAvailableLanguageOptions;
@end

