/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MRContentItemMetadata, NSArray, MRArtwork, _MRContentItemProtobuf, NSData, NSDictionary;

@interface MRContentItem : NSObject <NSCopying> {

	NSString* _identifier;
	MRContentItemMetadata* _metadata;
	NSString* _info;
	NSArray* _availableLanguageOptions;
	NSArray* _currentLanguageOptions;
	NSArray* _sections;
	NSString* _parentIdentifier;
	NSString* _ancestorIdentifier;
	NSString* _queueIdentifier;
	NSString* _requestIdentifier;
	MRArtwork* _artwork;

}

@property (nonatomic,readonly) _MRContentItemProtobuf * protobuf; 
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) MRContentItemMetadata * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * info;                                               //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSArray * availableLanguageOptions;                            //@synthesize availableLanguageOptions=_availableLanguageOptions - In the implementation block
@property (nonatomic,copy) NSArray * currentLanguageOptions;                              //@synthesize currentLanguageOptions=_currentLanguageOptions - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                            //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * parentIdentifier;                                   //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ancestorIdentifier;                                 //@synthesize ancestorIdentifier=_ancestorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                                    //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) MRArtwork * artwork;                                         //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) MRContentItem * skeleton; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSDictionary * nowPlayingInfo; 
+(id)mergeContentItems:(id)arg1 ;
+(id)extractedIdentifierFromNowPlayingInfo:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(MRContentItem *)skeleton;
-(NSString *)queueIdentifier;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(NSArray *)availableLanguageOptions;
-(NSString *)info;
-(void)setArtwork:(MRArtwork *)arg1 ;
-(void)setAncestorIdentifier:(NSString *)arg1 ;
-(NSArray *)sections;
-(NSString *)parentIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(id)initWithNowPlayingInfo:(id)arg1 ;
-(void)setMetadata:(MRContentItemMetadata *)arg1 ;
-(void)setCurrentLanguageOptions:(NSArray *)arg1 ;
-(id)description;
-(MRArtwork *)artwork;
-(NSData *)data;
-(void)setInfo:(NSString *)arg1 ;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(_MRContentItemProtobuf *)protobuf;
-(NSString *)ancestorIdentifier;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setNowPlayingInfo:(id)arg1 policy:(unsigned char)arg2 request:(id)arg3 ;
-(NSArray *)currentLanguageOptions;
-(MRContentItemMetadata *)metadata;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAvailableLanguageOptions:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

