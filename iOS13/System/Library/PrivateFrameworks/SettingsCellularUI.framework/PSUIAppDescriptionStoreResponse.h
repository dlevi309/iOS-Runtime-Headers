/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)iconURL;
-(void)setIconURL:(NSURL *)arg1 ;
-(PSUIAppDescription *)partialAppDescription;
-(void)setPartialAppDescription:(PSUIAppDescription *)arg1 ;
-(NSURL *)installURL;
-(void)setInstallURL:(NSURL *)arg1 ;
@end

