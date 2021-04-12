/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExternalID:(id)arg1;
-(NSString *)externalID;
-(NSString *)subtitle;
-(void)setTitle:(id)arg1;
-(void)setType:(id)arg1;
-(void)setMetadata:(id)arg1;
-(NSString *)url;
-(NSString *)description;
-(void)setUrl:(id)arg1;
-(NSString *)type;
-(BOOL)isExplicit;
-(void)setSubtitle:(id)arg1;
-(void)setDescription:(id)arg1;
-(NSDictionary *)metadata;
-(void)setIsExplicit:(BOOL)arg1;
-(NSString *)title;
-(void)setContentRatingDomain:(id)arg1;
-(NSNumber *)resumeTime;
-(NSString *)contentRatingDomain;
-(void)setInterstitials:(id)arg1;
-(NSArray *)interstitials;
-(void)setContentRatingRanking:(id)arg1;
-(NSNumber *)contentRatingRanking;
-(void)setArtworkImageURL:(id)arg1;
-(NSString *)artworkImageURL;
-(void)setArtworkImageSrcset:(id)arg1;
-(NSString *)artworkImageSrcset;
-(void)setResumeTime:(id)arg1;
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
-(void)setExternalID:(NSString *)arg1 ;
-(IKAppMediaItemBridge *)bridge;
-(NSString *)externalID;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)url;
-(NSString *)description;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)type;
-(BOOL)isExplicit;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setIsExplicit:(BOOL)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(void)setContentRatingDomain:(NSString *)arg1 ;
-(NSNumber *)resumeTime;
-(NSString *)contentRatingDomain;
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
-(void)setResumeTime:(NSNumber *)arg1 ;
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

