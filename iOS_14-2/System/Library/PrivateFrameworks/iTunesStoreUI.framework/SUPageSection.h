/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSString, UIImage, SSMutableURLRequestProperties, SSURLRequestProperties;

@interface SUPageSection : NSObject {

	double _expirationTime;
	NSString* _identifier;
	UIImage* _image;
	long long _structuredPageType;
	NSString* _title;
	SSMutableURLRequestProperties* _urlRequestProperties;
	id _userInfo;

}

@property (nonatomic,readonly) id segmentedControlItem; 
@property (assign,nonatomic) double expirationTime;                                    //@synthesize expirationTime=_expirationTime - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIImage * image;                                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long structuredPageType;                             //@synthesize structuredPageType=_structuredPageType - In the implementation block
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) SSURLRequestProperties * URLRequestProperties;              //@synthesize urlRequestProperties=_urlRequestProperties - In the implementation block
@property (nonatomic,retain) id userInfo;                                              //@synthesize userInfo=_userInfo - In the implementation block
-(void)setUserInfo:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)userInfo;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)_setURL:(id)arg1 ;
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
-(SSURLRequestProperties *)URLRequestProperties;
-(BOOL)loadFromDictionary:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setURLRequestProperties:(SSURLRequestProperties *)arg1 ;
-(void)setStructuredPageType:(long long)arg1 ;
-(void)_setURLBagKey:(id)arg1 ;
-(id)segmentedControlItem;
-(long long)structuredPageType;
@end

