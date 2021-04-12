/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)userInfo;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(void)_setURL:(id)arg1 ;
-(SSURLRequestProperties *)URLRequestProperties;
-(void)setURLRequestProperties:(SSURLRequestProperties *)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 ;
-(void)setStructuredPageType:(long long)arg1 ;
-(void)_setURLBagKey:(id)arg1 ;
-(id)segmentedControlItem;
-(long long)structuredPageType;
@end

