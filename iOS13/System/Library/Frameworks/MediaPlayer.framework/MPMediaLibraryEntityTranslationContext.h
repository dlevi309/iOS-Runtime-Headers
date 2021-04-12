/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                    //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSArray * allowedEntityIdentifiers;               //@synthesize allowedEntityIdentifiers=_allowedEntityIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * scopedContainers;                       //@synthesize scopedContainers=_scopedContainers - In the implementation block
@property (assign,getter=isMultiQuery,nonatomic) BOOL multiQuery;              //@synthesize multiQuery=_multiQuery - In the implementation block
@property (assign,nonatomic) unsigned long long filteringOptions;              //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (nonatomic,retain) MPModelKind * modelKind;                          //@synthesize modelKind=_modelKind - In the implementation block
@property (nonatomic,retain) NSString * personID;                              //@synthesize personID=_personID - In the implementation block
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(unsigned long long)filteringOptions;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(NSArray *)scopedContainers;
-(void)setScopedContainers:(NSArray *)arg1 ;
-(void)setFilteringOptions:(unsigned long long)arg1 ;
-(void)setModelKind:(MPModelKind *)arg1 ;
-(MPModelKind *)modelKind;
-(NSArray *)allowedEntityIdentifiers;
-(void)setAllowedEntityIdentifiers:(NSArray *)arg1 ;
-(BOOL)isMultiQuery;
-(void)setMultiQuery:(BOOL)arg1 ;
@end

