/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray, FCArticleListEditorialMetadata, NSDate, NTPBArticleListRecord, FCInterestToken;

@interface FCArticleList : NSObject {

	NSString* _identifier;
	NSArray* _articleIDs;
	unsigned long long _type;
	FCArticleListEditorialMetadata* _editorialMetadata;
	NSDate* _lastModifiedDate;
	NTPBArticleListRecord* _record;
	FCInterestToken* _interestToken;

}

@property (nonatomic,readonly) NTPBArticleListRecord * record;                                  //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) FCInterestToken * interestToken;                                 //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * articleIDs;                                            //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) FCArticleListEditorialMetadata * editorialMetadata;              //@synthesize editorialMetadata=_editorialMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                                  //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
-(unsigned long long)type;
-(NSString *)identifier;
-(NTPBArticleListRecord *)record;
-(NSDate *)lastModifiedDate;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 ;
-(FCInterestToken *)interestToken;
-(NSArray *)articleIDs;
-(FCArticleListEditorialMetadata *)editorialMetadata;
@end

