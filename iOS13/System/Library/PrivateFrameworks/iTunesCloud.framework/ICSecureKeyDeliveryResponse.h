/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;
-(void)setDialog:(ICStoreDialogResponse *)arg1 ;
-(void)setServerPlaybackContextData:(NSData *)arg1 ;
-(NSData *)serverPlaybackContextData;
-(NSData *)contentKeyContextData;
-(void)finishAssetResourceLoadingRequest:(id)arg1 withError:(id)arg2 ;
-(void)setServerError:(NSError *)arg1 ;
-(NSDate *)rentalExpirationDate;
-(void)setRentalExpirationDate:(NSDate *)arg1 ;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(void)setContentKeyContextData:(NSData *)arg1 ;
@end

