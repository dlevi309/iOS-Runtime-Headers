/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
*/


@class NSString;

@interface NNCLastNewsStoryResult : NSObject {

	NSString* _headlineIdentifier;
	NSString* _headlineTitle;
	NSString* _sectionName;
	NSString* _sectionIdentifier;
	NSString* _sourceName;
	NSString* _sourceIdentifier;
	NSString* _excerpt;
	unsigned long long _headlineIndex;
	unsigned long long _totalHeadlineCount;
	long long _family;

}

@property (nonatomic,copy) NSString * headlineIdentifier;                        //@synthesize headlineIdentifier=_headlineIdentifier - In the implementation block
@property (nonatomic,copy) NSString * headlineTitle;                             //@synthesize headlineTitle=_headlineTitle - In the implementation block
@property (nonatomic,copy) NSString * sectionName;                               //@synthesize sectionName=_sectionName - In the implementation block
@property (nonatomic,copy) NSString * sectionIdentifier;                         //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSString * sourceIdentifier;                          //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * excerpt;                                   //@synthesize excerpt=_excerpt - In the implementation block
@property (assign,nonatomic) unsigned long long headlineIndex;                   //@synthesize headlineIndex=_headlineIndex - In the implementation block
@property (assign,nonatomic) unsigned long long totalHeadlineCount;              //@synthesize totalHeadlineCount=_totalHeadlineCount - In the implementation block
@property (assign,nonatomic) long long family;                                   //@synthesize family=_family - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)family;
-(void)setFamily:(long long)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(NSString *)excerpt;
-(void)setExcerpt:(NSString *)arg1 ;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(NSString *)sectionName;
-(void)setSectionName:(NSString *)arg1 ;
-(NSString *)headlineIdentifier;
-(void)setHeadlineIdentifier:(NSString *)arg1 ;
-(NSString *)headlineTitle;
-(unsigned long long)headlineIndex;
-(unsigned long long)totalHeadlineCount;
-(void)setHeadlineTitle:(NSString *)arg1 ;
-(void)setHeadlineIndex:(unsigned long long)arg1 ;
-(void)setTotalHeadlineCount:(unsigned long long)arg1 ;
@end

