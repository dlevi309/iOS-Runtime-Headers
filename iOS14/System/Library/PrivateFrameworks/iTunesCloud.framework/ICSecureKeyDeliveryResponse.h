/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICStoreDialogResponse, NSError, NSDate, NSData;

@interface ICSecureKeyDeliveryResponse : NSObject {

	ICStoreDialogResponse* _dialog;
	NSError* _serverError;
	NSDate* _rentalExpirationDate;
	NSDate* _rentalPlaybackStartDate;
	NSDate* _renewalDate;
	NSData* _serverPlaybackContextData;
	NSData* _contentKeyContextData;

}

@property (nonatomic,copy) ICStoreDialogResponse * dialog;                  //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) NSError * serverError;                           //@synthesize serverError=_serverError - In the implementation block
@property (nonatomic,copy) NSDate * rentalExpirationDate;                   //@synthesize rentalExpirationDate=_rentalExpirationDate - In the implementation block
@property (nonatomic,copy) NSDate * rentalPlaybackStartDate;                //@synthesize rentalPlaybackStartDate=_rentalPlaybackStartDate - In the implementation block
@property (nonatomic,copy) NSDate * renewalDate;                            //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,copy) NSData * serverPlaybackContextData;              //@synthesize serverPlaybackContextData=_serverPlaybackContextData - In the implementation block
@property (nonatomic,copy) NSData * contentKeyContextData;                  //@synthesize contentKeyContextData=_contentKeyContextData - In the implementation block
-(ICStoreDialogResponse *)dialog;
-(NSError *)serverError;
-(void)setServerError:(NSError *)arg1 ;
-(void)setServerPlaybackContextData:(NSData *)arg1 ;
-(NSData *)serverPlaybackContextData;
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(void)setDialog:(ICStoreDialogResponse *)arg1 ;
-(NSData *)contentKeyContextData;
-(void)finishAssetResourceLoadingRequest:(id)arg1 withError:(id)arg2 ;
-(NSDate *)rentalExpirationDate;
-(void)setRentalExpirationDate:(NSDate *)arg1 ;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(void)setContentKeyContextData:(NSData *)arg1 ;
@end

