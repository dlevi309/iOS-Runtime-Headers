/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <libobjc.A.dylib/MPModelRequestDetailedKeepLocalStatusRequesting.h>

@class MPMediaLibrary, NSArray, NSString, MPMediaQuery;

@interface MPModelLibraryRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting> {

	BOOL _wantsDetailedKeepLocalRequestableResponse;
	MPMediaLibrary* _mediaLibrary;
	NSArray* _allowedItemIdentifiers;
	NSArray* _allowedSectionIdentifiers;
	NSArray* _scopedContainers;
	unsigned long long _filteringOptions;
	NSString* _filterText;
	MPMediaQuery* _legacyMediaQuery;
	NSRange _contentRange;

}

@property (nonatomic,copy) MPMediaQuery * legacyMediaQuery;                               //@synthesize legacyMediaQuery=_legacyMediaQuery - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                               //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSArray * allowedItemIdentifiers;                              //@synthesize allowedItemIdentifiers=_allowedItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * allowedSectionIdentifiers;                           //@synthesize allowedSectionIdentifiers=_allowedSectionIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * scopedContainers;                                    //@synthesize scopedContainers=_scopedContainers - In the implementation block
@property (assign,nonatomic) unsigned long long filteringOptions;                         //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (nonatomic,copy) NSString * filterText;                                         //@synthesize filterText=_filterText - In the implementation block
@property (assign,nonatomic) NSRange contentRange;                                        //@synthesize contentRange=_contentRange - In the implementation block
@property (assign,nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;              //@synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setFilteringOptions:(unsigned long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setFilterText:(NSString *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setScopedContainers:(NSArray *)arg1 ;
-(unsigned long long)filteringOptions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)scopedContainers;
-(MPMediaLibrary *)mediaLibrary;
-(NSString *)filterText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wantsDetailedKeepLocalRequestableResponse;
-(NSRange)contentRange;
-(void)setWantsDetailedKeepLocalRequestableResponse:(BOOL)arg1 ;
-(void)setLegacyMediaQuery:(MPMediaQuery *)arg1 ;
-(id)itemTranslationContext;
-(id)sectionTranslationContext;
-(NSArray *)allowedItemIdentifiers;
-(void)setAllowedItemIdentifiers:(NSArray *)arg1 ;
-(void)setContentRange:(NSRange)arg1 ;
-(NSArray *)allowedSectionIdentifiers;
-(void)setAllowedSectionIdentifiers:(NSArray *)arg1 ;
-(MPMediaQuery *)legacyMediaQuery;
@end

