/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WBSTabItemSearchSupport.h>

@class NSString, NSArray, NSDictionary, NSURL, NSUUID;

@interface WBSCloudTab : NSObject <NSCopying, WBSTabItemSearchSupport> {

	BOOL _matchedLastSearch;
	BOOL _isShowingReader;
	BOOL _pinned;
	NSString* _titleForLastSearch;
	NSArray* _titleWords;
	NSString* _URLStringForLastSearch;
	NSArray* _URLStringComponents;
	NSString* _lastSearchTerm;
	NSDictionary* _readerScrollPositionDictionary;
	NSString* _title;
	NSURL* _url;
	NSUUID* _uuid;
	NSString* _sceneID;

}

@property (assign,nonatomic) BOOL isShowingReader;                                                          //@synthesize isShowingReader=_isShowingReader - In the implementation block
@property (nonatomic,copy) NSDictionary * readerScrollPositionDictionary;                                   //@synthesize readerScrollPositionDictionary=_readerScrollPositionDictionary - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                                                   //@synthesize pinned=_pinned - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentationForUserActivityUserInfo; 
@property (nonatomic,copy,readonly) NSString * sceneID;                                                     //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy) NSString * titleForLastSearch;                                                   //@synthesize titleForLastSearch=_titleForLastSearch - In the implementation block
@property (nonatomic,copy) NSArray * titleWords;                                                            //@synthesize titleWords=_titleWords - In the implementation block
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,copy) NSString * URLStringForLastSearch;                                               //@synthesize URLStringForLastSearch=_URLStringForLastSearch - In the implementation block
@property (nonatomic,copy) NSArray * URLStringComponents;                                                   //@synthesize URLStringComponents=_URLStringComponents - In the implementation block
@property (nonatomic,copy) NSString * lastSearchTerm;                                                       //@synthesize lastSearchTerm=_lastSearchTerm - In the implementation block
@property (assign,nonatomic) BOOL matchedLastSearch;                                                        //@synthesize matchedLastSearch=_matchedLastSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dictionaryWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 isPinned:(BOOL)arg6 sceneID:(id)arg7 ;
-(NSString *)URLString;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isPinned;
-(NSUUID *)uuid;
-(void)setPinned:(BOOL)arg1 ;
-(void)setMatchedLastSearch:(BOOL)arg1 ;
-(NSString *)lastSearchTerm;
-(void)setURLStringForLastSearch:(NSString *)arg1 ;
-(NSArray *)titleWords;
-(NSDictionary *)readerScrollPositionDictionary;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLastSearchTerm:(NSString *)arg1 ;
-(void)setTitleWords:(NSArray *)arg1 ;
-(void)setTitleForLastSearch:(NSString *)arg1 ;
-(NSArray *)URLStringComponents;
-(NSString *)description;
-(id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 isPinned:(BOOL)arg6 ;
-(id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 sceneID:(id)arg6 ;
-(BOOL)hasSameUUIDAndURLAsTab:(id)arg1 ;
-(BOOL)isShowingReader;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithDictionaryFromUserActivityUserInfo:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)matchedLastSearch;
-(NSDictionary *)dictionaryRepresentationForUserActivityUserInfo;
-(void)setReaderScrollPositionDictionary:(NSDictionary *)arg1 ;
-(NSString *)URLStringForLastSearch;
-(void)setIsShowingReader:(BOOL)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)titleForLastSearch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURLStringComponents:(NSArray *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sceneID;
@end

