/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SFPunchout, NSString, NSNumber, NSDate, NSMutableArray, PRSRankingItem, NSData;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding> {

	SFPunchout* _cachedPunchout;
	BOOL _hasCommunicationContent;
	BOOL _forceNoTopHit;
	BOOL _isAppClip;
	BOOL _isWebClip;
	BOOL _isSafariTopHit;
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
@property (assign,nonatomic) BOOL forceNoTopHit;                                            //@synthesize forceNoTopHit=_forceNoTopHit - In the implementation block
@property (assign,nonatomic) BOOL isAppClip;                                                //@synthesize isAppClip=_isAppClip - In the implementation block
@property (assign,nonatomic) BOOL isWebClip;                                                //@synthesize isWebClip=_isWebClip - In the implementation block
@property (assign,nonatomic) BOOL isSafariTopHit;                                           //@synthesize isSafariTopHit=_isSafariTopHit - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)setProtectionClass:(NSString *)arg1 ;
-(NSString *)userActivityType;
-(NSDate *)lastUsedDate;
-(void)setIsAppClip:(BOOL)arg1 ;
-(NSString *)contentURL;
-(void)setUserActivityType:(NSString *)arg1 ;
-(BOOL)isAppClip;
-(id)init;
-(T)score;
-(NSString *)filename;
-(void)setDocumentIdentifier:(NSNumber *)arg1 ;
-(void)setParentFileIdentifier:(NSNumber *)arg1 ;
-(void)setFileIdentifier:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setScore:(T)arg1 ;
-(NSString *)protectionClass;
-(id)objectForFeedback;
-(void)setFilename:(NSString *)arg1 ;
-(BOOL)isWebClip;
-(void)setContentURL:(NSString *)arg1 ;
-(NSNumber *)fileIdentifier;
-(NSNumber *)parentFileIdentifier;
-(void)setUrl:(id)arg1 ;
-(id)punchout;
-(void)setIsWebClip:(BOOL)arg1 ;
-(NSNumber *)documentIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(float)l2score;
-(unsigned long long)predictionsFeedbackActionType;
-(NSMutableArray *)duplicatedItems;
-(void)setDuplicatedItems:(NSMutableArray *)arg1 ;
-(NSData *)suggestionsFeedbackData;
-(void)setPropertiesOnResultCopy:(id)arg1 ;
-(void)setPredictionsFeedbackActionType:(unsigned long long)arg1 ;
-(NSString *)launchString;
-(void)setLaunchString:(NSString *)arg1 ;
-(void)setSuggestionsFeedbackData:(NSData *)arg1 ;
-(BOOL)isSafariTopHitForQuery:(id)arg1 ;
-(void)setL2score:(float)arg1 ;
-(PRSRankingItem *)rankingItem;
-(void)setRankingItem:(PRSRankingItem *)arg1 ;
-(unsigned)feedbackBlockId;
-(void)setFeedbackBlockId:(unsigned)arg1 ;
-(BOOL)hasCommunicationContent;
-(void)setHasCommunicationContent:(BOOL)arg1 ;
-(BOOL)forceNoTopHit;
-(void)setForceNoTopHit:(BOOL)arg1 ;
-(BOOL)isSafariTopHit;
-(void)setIsSafariTopHit:(BOOL)arg1 ;
@end

