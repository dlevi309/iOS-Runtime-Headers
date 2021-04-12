/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaLibrary, NSArray, MPModelKind, NSString;

@interface MPMediaLibraryEntityTranslationContext : NSObject {

	BOOL _multiQuery;
	MPMediaLibrary* _mediaLibrary;
	NSArray* _allowedEntityIdentifiers;
	NSArray* _scopedContainers;
	unsigned long long _filteringOptions;
	MPModelKind* _modelKind;
	NSString* _personID;
	NSString* _filterText;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                    //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSArray * allowedEntityIdentifiers;               //@synthesize allowedEntityIdentifiers=_allowedEntityIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * scopedContainers;                       //@synthesize scopedContainers=_scopedContainers - In the implementation block
@property (assign,getter=isMultiQuery,nonatomic) BOOL multiQuery;              //@synthesize multiQuery=_multiQuery - In the implementation block
@property (assign,nonatomic) unsigned long long filteringOptions;              //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (nonatomic,retain) MPModelKind * modelKind;                          //@synthesize modelKind=_modelKind - In the implementation block
@property (nonatomic,retain) NSString * personID;                              //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * filterText;                            //@synthesize filterText=_filterText - In the implementation block
-(void)setFilteringOptions:(unsigned long long)arg1 ;
-(void)setFilterText:(NSString *)arg1 ;
-(NSArray *)allowedEntityIdentifiers;
-(void)setScopedContainers:(NSArray *)arg1 ;
-(unsigned long long)filteringOptions;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(NSString *)personID;
-(void)setMultiQuery:(BOOL)arg1 ;
-(BOOL)isMultiQuery;
-(void)setAllowedEntityIdentifiers:(NSArray *)arg1 ;
-(MPModelKind *)modelKind;
-(NSArray *)scopedContainers;
-(void)setPersonID:(NSString *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(NSString *)filterText;
-(void)setModelKind:(MPModelKind *)arg1 ;
@end

