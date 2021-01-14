/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class PSUIAppDescription, NSURL;

@interface PSUIAppDescriptionStoreResponse : NSObject {

	PSUIAppDescription* _partialAppDescription;
	NSURL* _iconURL;
	NSURL* _installURL;

}

@property (nonatomic,retain) PSUIAppDescription * partialAppDescription;              //@synthesize partialAppDescription=_partialAppDescription - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                                         //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) NSURL * installURL;                                      //@synthesize installURL=_installURL - In the implementation block
-(void)setIconURL:(NSURL *)arg1 ;
-(NSURL *)iconURL;
-(NSURL *)installURL;
-(PSUIAppDescription *)partialAppDescription;
-(void)setPartialAppDescription:(PSUIAppDescription *)arg1 ;
-(void)setInstallURL:(NSURL *)arg1 ;
@end

