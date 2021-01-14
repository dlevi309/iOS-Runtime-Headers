/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSURL, WLKChannelDetails, VUIContentMetadata, NSString, IKAppContext;

@interface VUIActionPunchout : VUIAction {

	BOOL _isEntitledToPlay;
	BOOL _isPlaybackURL;
	NSURL* _punchoutURL;
	WLKChannelDetails* _channelDetails;
	VUIContentMetadata* _contentMetadata;
	NSString* _externalID;
	NSString* _referenceID;
	NSString* _canonicalID;
	NSString* _contentTitle;
	IKAppContext* _appContext;

}

@property (assign,nonatomic) BOOL isPlaybackURL;                                //@synthesize isPlaybackURL=_isPlaybackURL - In the implementation block
@property (nonatomic,copy) NSString * contentTitle;                             //@synthesize contentTitle=_contentTitle - In the implementation block
@property (nonatomic,retain) IKAppContext * appContext;                         //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) NSURL * punchoutURL;                               //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (nonatomic,retain) WLKChannelDetails * channelDetails;                //@synthesize channelDetails=_channelDetails - In the implementation block
@property (assign,nonatomic) BOOL isEntitledToPlay;                             //@synthesize isEntitledToPlay=_isEntitledToPlay - In the implementation block
@property (nonatomic,retain) VUIContentMetadata * contentMetadata;              //@synthesize contentMetadata=_contentMetadata - In the implementation block
@property (nonatomic,retain) NSString * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,retain) NSString * referenceID;                            //@synthesize referenceID=_referenceID - In the implementation block
@property (nonatomic,retain) NSString * canonicalID;                            //@synthesize canonicalID=_canonicalID - In the implementation block
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSString *)canonicalID;
-(NSString *)contentTitle;
-(WLKChannelDetails *)channelDetails;
-(void)setChannelDetails:(WLKChannelDetails *)arg1 ;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(NSURL *)punchoutURL;
-(void)setCanonicalID:(NSString *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 appContext:(id)arg2 ;
-(NSString *)referenceID;
-(void)setReferenceID:(NSString *)arg1 ;
-(BOOL)isEntitledToPlay;
-(VUIContentMetadata *)contentMetadata;
-(void)setContentTitle:(NSString *)arg1 ;
-(BOOL)_isValidAppInstalled;
-(void)_openAirplayPicker:(/*^block*/id)arg1 ;
-(void)_startAppInstallFlow:(/*^block*/id)arg1 ;
-(void)_openPunchoutURL:(/*^block*/id)arg1 ;
-(BOOL)isPlaybackURL;
-(void)setPunchoutURL:(NSURL *)arg1 ;
-(void)setIsEntitledToPlay:(BOOL)arg1 ;
-(void)setContentMetadata:(VUIContentMetadata *)arg1 ;
-(void)setIsPlaybackURL:(BOOL)arg1 ;
@end

