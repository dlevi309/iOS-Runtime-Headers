/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSNumber, NSURL, NSString;

@interface IKAssetElement : IKViewElement {

	BOOL _infiniteDuration;

}

@property (nonatomic,retain,readonly) NSNumber * persistentID; 
@property (nonatomic,retain,readonly) NSNumber * rentalAdamID; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long keyDelivery; 
@property (getter=isInfiniteDuration,nonatomic,readonly) BOOL infiniteDuration;              //@synthesize infiniteDuration=_infiniteDuration - In the implementation block
@property (nonatomic,retain,readonly) NSString * actionParams; 
@property (nonatomic,retain,readonly) NSString * adamID; 
@property (nonatomic,retain,readonly) NSURL * extrasURL; 
@property (nonatomic,retain,readonly) NSString * bookmarkID; 
@property (nonatomic,retain,readonly) NSString * contentID; 
@property (nonatomic,retain,readonly) NSString * externalID; 
@property (nonatomic,retain,readonly) NSString * serviceID; 
+(BOOL)shouldParseChildDOMElements;
-(BOOL)vui_disableResumeMenu;
-(id)vui_rentalAdamIDString;
-(id)vui_persistentID;
-(id)vui_fpsCertificateURL;
-(id)vui_fpsKeyServerURL;
-(id)vui_resumeTime;
-(BOOL)vui_disableLocalAsset;
-(id)vui_launchPlaybackURL;
-(id)vui_hlsPlaylistURL;
-(id)vui_contentRatingRank;
-(id)vui_scrubVideoURL;
-(BOOL)videos_disableLocalAsset;
-(id)videos_persistentID;
-(id)videos_resumeTime;
-(id)videos_rentalAdamIDString;
-(id)videos_fpsCertificateURL;
-(id)videos_fpsKeyServerURL;
-(NSString *)externalID;
-(NSString *)serviceID;
-(NSURL *)url;
-(NSString *)contentID;
-(NSString *)bookmarkID;
-(NSString *)adamID;
-(NSNumber *)persistentID;
-(long long)type;
-(NSURL *)extrasURL;
-(NSString *)actionParams;
-(id)_numberForAttribute:(id)arg1 ;
-(long long)keyDelivery;
-(BOOL)infiniteDuration;
-(NSNumber *)rentalAdamID;
-(BOOL)isInfiniteDuration;
@end

