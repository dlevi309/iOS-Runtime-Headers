/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * titleForLastSearch;                                                   //@synthesize titleForLastSearch=_titleForLastSearch - In the implementation block
@property (nonatomic,copy) NSArray * titleWords;                                                            //@synthesize titleWords=_titleWords - In the implementation block
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,copy) NSString * URLStringForLastSearch;                                               //@synthesize URLStringForLastSearch=_URLStringForLastSearch - In the implementation block
@property (nonatomic,copy) NSArray * URLStringComponents;                                                   //@synthesize URLStringComponents=_URLStringComponents - In the implementation block
@property (nonatomic,copy) NSString * lastSearchTerm;                                                       //@synthesize lastSearchTerm=_lastSearchTerm - In the implementation block
@property (assign,nonatomic) BOOL matchedLastSearch;                                                        //@synthesize matchedLastSearch=_matchedLastSearch - In the implementation block
+(id)_dictionaryWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 isPinned:(BOOL)arg6 sceneID:(id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)url;
-(NSUUID *)uuid;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)URLString;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(NSString *)sceneID;
-(BOOL)isShowingReader;
-(id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 sceneID:(id)arg6 ;
-(NSDictionary *)dictionaryRepresentationForUserActivityUserInfo;
-(NSString *)lastSearchTerm;
-(void)setLastSearchTerm:(NSString *)arg1 ;
-(NSString *)titleForLastSearch;
-(void)setTitleForLastSearch:(NSString *)arg1 ;
-(NSArray *)titleWords;
-(void)setTitleWords:(NSArray *)arg1 ;
-(NSString *)URLStringForLastSearch;
-(void)setURLStringForLastSearch:(NSString *)arg1 ;
-(NSArray *)URLStringComponents;
-(void)setURLStringComponents:(NSArray *)arg1 ;
-(BOOL)matchedLastSearch;
-(void)setMatchedLastSearch:(BOOL)arg1 ;
-(id)initWithDictionaryFromUserActivityUserInfo:(id)arg1 ;
-(id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 isPinned:(BOOL)arg6 ;
-(BOOL)hasSameUUIDAndURLAsTab:(id)arg1 ;
-(void)setIsShowingReader:(BOOL)arg1 ;
-(NSDictionary *)readerScrollPositionDictionary;
-(void)setReaderScrollPositionDictionary:(NSDictionary *)arg1 ;
@end

