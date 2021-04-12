/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class _TVSecureKeyLoader, NSString, NSURL, NSNumber, NSArray, NSDictionary;

@interface TVMediaItem : NSObject {

	BOOL _containsExplicitContent;
	_TVSecureKeyLoader* secureKeyLoader;
	NSString* _type;
	NSURL* _url;
	NSString* _title;
	NSString* _subtitle;
	NSString* _itemDescription;
	NSString* _contentRatingDomain;
	NSNumber* _contentRatingRanking;
	NSURL* _artworkImageURL;
	double _resumeTime;
	NSArray* _interstitials;
	NSArray* _highlightGroups;
	NSDictionary* _userInfo;
	NSString* _contentRating;
	double _contentProposalPresentationTime;
	double _contentProposalAutomaticAcceptanceInterval;
	double _playbackProgress;
	NSString* _externalIdentifier;
	NSString* _externalProfileIdentifier;
	NSString* _externalServiceIdentifier;

}

@property (nonatomic,retain) _TVSecureKeyLoader * secureKeyLoader; 
@property (nonatomic,retain) NSString * type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                                     //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSString * contentRatingDomain;                                 //@synthesize contentRatingDomain=_contentRatingDomain - In the implementation block
@property (nonatomic,retain) NSNumber * contentRatingRanking;                                //@synthesize contentRatingRanking=_contentRatingRanking - In the implementation block
@property (nonatomic,retain) NSURL * artworkImageURL;                                        //@synthesize artworkImageURL=_artworkImageURL - In the implementation block
@property (assign,nonatomic) BOOL containsExplicitContent;                                   //@synthesize containsExplicitContent=_containsExplicitContent - In the implementation block
@property (assign,nonatomic) double resumeTime;                                              //@synthesize resumeTime=_resumeTime - In the implementation block
@property (nonatomic,retain) NSArray * interstitials;                                        //@synthesize interstitials=_interstitials - In the implementation block
@property (nonatomic,retain) NSArray * highlightGroups;                                      //@synthesize highlightGroups=_highlightGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * contentRating;                                         //@synthesize contentRating=_contentRating - In the implementation block
@property (assign,nonatomic) double contentProposalPresentationTime;                         //@synthesize contentProposalPresentationTime=_contentProposalPresentationTime - In the implementation block
@property (assign,nonatomic) double contentProposalAutomaticAcceptanceInterval;              //@synthesize contentProposalAutomaticAcceptanceInterval=_contentProposalAutomaticAcceptanceInterval - In the implementation block
@property (assign,nonatomic) double playbackProgress;                                        //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,copy) NSString * externalIdentifier;                                    //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * externalProfileIdentifier;                             //@synthesize externalProfileIdentifier=_externalProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSString * externalServiceIdentifier;                             //@synthesize externalServiceIdentifier=_externalServiceIdentifier - In the implementation block
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(NSURL *)url;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(double)playbackProgress;
-(void)setPlaybackProgress:(double)arg1 ;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(void)setContentRatingRanking:(NSNumber *)arg1 ;
-(NSNumber *)contentRatingRanking;
-(void)setArtworkImageURL:(NSURL *)arg1 ;
-(NSURL *)artworkImageURL;
-(void)setResumeTime:(double)arg1 ;
-(double)resumeTime;
-(void)setContentRatingDomain:(NSString *)arg1 ;
-(NSString *)contentRatingDomain;
-(void)setContentProposalAutomaticAcceptanceInterval:(double)arg1 ;
-(double)contentProposalAutomaticAcceptanceInterval;
-(void)setContentProposalPresentationTime:(double)arg1 ;
-(double)contentProposalPresentationTime;
-(NSArray *)highlightGroups;
-(void)setHighlightGroups:(NSArray *)arg1 ;
-(_TVSecureKeyLoader *)secureKeyLoader;
-(void)setSecureKeyLoader:(_TVSecureKeyLoader *)arg1 ;
-(BOOL)containsExplicitContent;
-(void)setContainsExplicitContent:(BOOL)arg1 ;
-(NSString *)externalProfileIdentifier;
-(void)setExternalProfileIdentifier:(NSString *)arg1 ;
-(NSString *)externalServiceIdentifier;
-(void)setExternalServiceIdentifier:(NSString *)arg1 ;
@end

