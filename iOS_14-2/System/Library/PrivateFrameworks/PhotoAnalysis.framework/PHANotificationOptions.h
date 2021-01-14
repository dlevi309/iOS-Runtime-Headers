/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSString, NSDate, NSDictionary, PHAsset;

@interface PHANotificationOptions : NSObject {

	unsigned char _type;
	NSString* _title;
	NSString* _subtitle;
	NSString* _bodyText;
	NSDate* _deliveryDate;
	NSDate* _expirationDate;
	NSDictionary* _userInfo;
	PHAsset* _keyAsset;
	NSString* _collectionUUID;

}

@property (nonatomic,readonly) unsigned char type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * bodyText;                    //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,retain) NSDate * deliveryDate;                  //@synthesize deliveryDate=_deliveryDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                     //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) NSString * collectionUUID;              //@synthesize collectionUUID=_collectionUUID - In the implementation block
+(id)stringFromNotificationType:(unsigned char)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithType:(unsigned char)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDictionary *)userInfo;
-(PHAsset *)keyAsset;
-(NSString *)bodyText;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCollectionUUID:(NSString *)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(unsigned char)type;
-(NSString *)collectionUUID;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDate *)deliveryDate;
-(void)setDeliveryDate:(NSDate *)arg1 ;
@end

