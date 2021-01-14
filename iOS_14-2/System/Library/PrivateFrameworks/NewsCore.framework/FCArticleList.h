/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NTPBArticleListRecord *)record;
-(FCArticleListEditorialMetadata *)editorialMetadata;
-(FCInterestToken *)interestToken;
-(NSArray *)articleIDs;
-(NSDate *)lastModifiedDate;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 ;
-(unsigned long long)type;
-(NSString *)identifier;
@end

