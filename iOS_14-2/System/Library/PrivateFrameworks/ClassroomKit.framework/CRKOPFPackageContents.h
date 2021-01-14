/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface CRKOPFPackageContents : NSObject {

	NSString* _bookIdentifier;
	NSString* _bookIdentifierType;
	NSString* _title;
	NSString* _author;
	NSString* _coverImagePath;
	NSString* _tableOfContentsFilePath;
	NSString* _tableOfContentsMediaType;
	NSMutableArray* _spineItemIdentifiers;
	NSMutableDictionary* _itemPathsByIdentifier;

}

@property (nonatomic,copy) NSString * bookIdentifier;                                    //@synthesize bookIdentifier=_bookIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bookIdentifierType;                                //@synthesize bookIdentifierType=_bookIdentifierType - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;                                            //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * coverImagePath;                                    //@synthesize coverImagePath=_coverImagePath - In the implementation block
@property (nonatomic,copy) NSString * tableOfContentsFilePath;                           //@synthesize tableOfContentsFilePath=_tableOfContentsFilePath - In the implementation block
@property (nonatomic,copy) NSString * tableOfContentsMediaType;                          //@synthesize tableOfContentsMediaType=_tableOfContentsMediaType - In the implementation block
@property (nonatomic,readonly) NSMutableArray * spineItemIdentifiers;                    //@synthesize spineItemIdentifiers=_spineItemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemPathsByIdentifier;              //@synthesize itemPathsByIdentifier=_itemPathsByIdentifier - In the implementation block
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCoverImagePath:(NSString *)arg1 ;
-(NSString *)coverImagePath;
-(NSString *)title;
-(NSMutableDictionary *)itemPathsByIdentifier;
-(NSMutableArray *)spineItemIdentifiers;
-(id)cfiWithItemIdentifier:(id)arg1 fragment:(id)arg2 ;
-(NSString *)bookIdentifierType;
-(NSString *)bookIdentifier;
-(id)initWithIdentifierType:(id)arg1 identifier:(id)arg2 ;
-(id)itemIdentifierForHref:(id)arg1 fragment:(id*)arg2 ;
-(id)urlWithItemIdentifier:(id)arg1 fragment:(id)arg2 ;
-(void)setBookIdentifier:(NSString *)arg1 ;
-(void)setBookIdentifierType:(NSString *)arg1 ;
-(NSString *)tableOfContentsFilePath;
-(void)setTableOfContentsFilePath:(NSString *)arg1 ;
-(NSString *)tableOfContentsMediaType;
-(void)setTableOfContentsMediaType:(NSString *)arg1 ;
@end

