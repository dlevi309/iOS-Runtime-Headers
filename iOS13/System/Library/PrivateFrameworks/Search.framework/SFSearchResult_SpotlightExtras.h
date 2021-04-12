/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SFPunchout, NSString, NSNumber, NSDate, NSMutableArray, PRSRankingItem, NSData;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding> {

	SFPunchout* _cachedPunchout;
	BOOL _hasCommunicationContent;
	float _l2score;
	unsigned _feedbackBlockId;
	NSString* _protectionClass;
	NSNumber* _fileIdentifier;
	NSNumber* _parentFileIdentifier;
	NSString* _filename;
	NSNumber* _documentIdentifier;
	NSString* _launchString;
	NSDate* _lastUsedDate;
	NSString* _userActivityType;
	NSMutableArray* _duplicatedItems;
	NSString* _contentURL;
	PRSRankingItem* _rankingItem;
	NSData* _suggestionsFeedbackData;
	unsigned long long _predictionsFeedbackActionType;
	T _score;

}

@property (nonatomic,retain) NSString * protectionClass;                                    //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,retain) NSNumber * fileIdentifier;                                     //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * parentFileIdentifier;                               //@synthesize parentFileIdentifier=_parentFileIdentifier - In the implementation block
@property (nonatomic,retain) NSString * filename;                                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSNumber * documentIdentifier;                                 //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (assign,nonatomic) T score;                                                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float l2score;                                                 //@synthesize l2score=_l2score - In the implementation block
@property (nonatomic,retain) NSString * launchString;                                       //@synthesize launchString=_launchString - In the implementation block
@property (nonatomic,retain) NSDate * lastUsedDate;                                         //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (nonatomic,retain) NSString * userActivityType;                                   //@synthesize userActivityType=_userActivityType - In the implementation block
@property (nonatomic,retain) NSMutableArray * duplicatedItems;                              //@synthesize duplicatedItems=_duplicatedItems - In the implementation block
@property (nonatomic,retain) NSString * contentURL;                                         //@synthesize contentURL=_contentURL - In the implementation block
@property (retain) PRSRankingItem * rankingItem;                                            //@synthesize rankingItem=_rankingItem - In the implementation block
@property (nonatomic,retain) NSData * suggestionsFeedbackData;                              //@synthesize suggestionsFeedbackData=_suggestionsFeedbackData - In the implementation block
@property (assign,nonatomic) unsigned feedbackBlockId;                                      //@synthesize feedbackBlockId=_feedbackBlockId - In the implementation block
@property (assign,nonatomic) BOOL hasCommunicationContent;                                  //@synthesize hasCommunicationContent=_hasCommunicationContent - In the implementation block
@property (assign,nonatomic) unsigned long long predictionsFeedbackActionType;              //@synthesize predictionsFeedbackActionType=_predictionsFeedbackActionType - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(T)score;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setScore:(T)arg1 ;
-(NSString *)contentURL;
-(void)setContentURL:(NSString *)arg1 ;
-(NSString *)userActivityType;
-(void)setUserActivityType:(NSString *)arg1 ;
-(void)setUrl:(id)arg1 ;
-(NSNumber *)documentIdentifier;
-(void)setDocumentIdentifier:(NSNumber *)arg1 ;
-(NSDate *)lastUsedDate;
-(NSString *)protectionClass;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(id)punchout;
-(void)setProtectionClass:(NSString *)arg1 ;
-(void)setParentFileIdentifier:(NSNumber *)arg1 ;
-(void)setFileIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)fileIdentifier;
-(NSNumber *)parentFileIdentifier;
-(unsigned long long)predictionsFeedbackActionType;
-(id)objectForFeedback;
-(void)setPredictionsFeedbackActionType:(unsigned long long)arg1 ;
-(NSString *)launchString;
-(void)setLaunchString:(NSString *)arg1 ;
-(NSData *)suggestionsFeedbackData;
-(void)setSuggestionsFeedbackData:(NSData *)arg1 ;
-(PRSRankingItem *)rankingItem;
-(float)l2score;
-(void)setL2score:(float)arg1 ;
-(NSMutableArray *)duplicatedItems;
-(void)setDuplicatedItems:(NSMutableArray *)arg1 ;
-(void)setRankingItem:(PRSRankingItem *)arg1 ;
-(unsigned)feedbackBlockId;
-(void)setFeedbackBlockId:(unsigned)arg1 ;
-(BOOL)hasCommunicationContent;
-(void)setHasCommunicationContent:(BOOL)arg1 ;
@end

