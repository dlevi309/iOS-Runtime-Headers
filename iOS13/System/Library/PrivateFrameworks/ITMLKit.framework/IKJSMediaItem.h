/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSMediaItem.h>
@class NSString, NSNumber, NSDictionary, NSArray;


@protocol IKJSMediaItem <JSExport>
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSString * externalID; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * contentRatingDomain; 
@property (nonatomic,retain) NSNumber * contentRatingRanking; 
@property (nonatomic,retain) NSString * artworkImageURL; 
@property (nonatomic,retain) NSString * artworkImageSrcset; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (nonatomic,retain) NSNumber * resumeTime; 
@property (nonatomic,retain) NSDictionary * metadata; 
@property (nonatomic,retain) NSArray * interstitials; 
@property (nonatomic,retain) NSArray * highlightGroups; 
@required
-(NSString *)description;
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSString *)url;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setMetadata:(id)arg1;
-(NSDictionary *)metadata;
-(NSString *)subtitle;
-(void)setUrl:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(void)setDescription:(id)arg1;
-(NSString *)externalID;
-(void)setExternalID:(id)arg1;
-(void)setInterstitials:(id)arg1;
-(NSArray *)interstitials;
-(void)setContentRatingRanking:(id)arg1;
-(NSNumber *)contentRatingRanking;
-(void)setArtworkImageURL:(id)arg1;
-(NSString *)artworkImageURL;
-(void)setArtworkImageSrcset:(id)arg1;
-(NSString *)artworkImageSrcset;
-(void)setIsExplicit:(BOOL)arg1;
-(BOOL)isExplicit;
-(void)setResumeTime:(id)arg1;
-(NSNumber *)resumeTime;
-(void)setContentRatingDomain:(id)arg1;
-(NSString *)contentRatingDomain;
-(id)initWithType:(id)arg1 :(id)arg2;
-(NSArray *)highlightGroups;
-(void)setHighlightGroups:(id)arg1;

@end


@class NSString, NSNumber, NSDictionary, NSArray, IKAppMediaItemBridge;

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem> {

	NSNumber* _resumeTime;
	IKAppMediaItemBridge* _bridge;

}

@property (nonatomic,readonly) IKAppMediaItemBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSString * externalID; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * contentRatingDomain; 
@property (nonatomic,retain) NSNumber * contentRatingRanking; 
@property (nonatomic,retain) NSString * artworkImageURL; 
@property (nonatomic,retain) NSString * artworkImageSrcset; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (nonatomic,retain) NSNumber * resumeTime;                        //@synthesize resumeTime=_resumeTime - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata; 
@property (nonatomic,retain) NSArray * interstitials; 
@property (nonatomic,retain) NSArray * highlightGroups; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)subtitle;
-(void)setUrl:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(IKAppMediaItemBridge *)bridge;
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(void)setContentRatingRanking:(NSNumber *)arg1 ;
-(NSNumber *)contentRatingRanking;
-(void)setRatingBadge:(id)arg1 ;
-(id)ratingBadge;
-(void)setArtworkImageURL:(NSString *)arg1 ;
-(NSString *)artworkImageURL;
-(void)setArtworkImageSrcset:(NSString *)arg1 ;
-(NSString *)artworkImageSrcset;
-(void)setIsExplicit:(BOOL)arg1 ;
-(BOOL)isExplicit;
-(void)setResumeTime:(NSNumber *)arg1 ;
-(NSNumber *)resumeTime;
-(void)setContentRatingDomain:(NSString *)arg1 ;
-(NSString *)contentRatingDomain;
-(void)setContentProposalAutomaticAcceptanceInterval:(double)arg1 ;
-(double)contentProposalAutomaticAcceptanceInterval;
-(void)setContentProposalPresentationTime:(double)arg1 ;
-(double)contentProposalPresentationTime;
-(id)initWithType:(id)arg1 :(id)arg2 ;
-(NSArray *)highlightGroups;
-(void)setHighlightGroups:(NSArray *)arg1 ;
-(void)loadCertificateDataForURI:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)loadContentIdentifierDataForURI:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)loadKeyDataForURI:(id)arg1 requestData:(id)arg2 withCallback:(/*^block*/id)arg3 ;
@end

