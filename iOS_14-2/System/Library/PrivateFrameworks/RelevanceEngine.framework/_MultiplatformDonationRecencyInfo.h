/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSString, NSDate;

@interface _MultiplatformDonationRecencyInfo : NSObject {

	NSString* _remoteBundleIdentifier;
	NSString* _localBundleIdentifier;
	NSDate* _remoteDonationCreationDate;
	NSDate* _localDonationCreationDate;

}

@property (nonatomic,copy) NSString * remoteBundleIdentifier;                  //@synthesize remoteBundleIdentifier=_remoteBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localBundleIdentifier;                   //@synthesize localBundleIdentifier=_localBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * remoteDonationCreationDate;              //@synthesize remoteDonationCreationDate=_remoteDonationCreationDate - In the implementation block
@property (nonatomic,retain) NSDate * localDonationCreationDate;               //@synthesize localDonationCreationDate=_localDonationCreationDate - In the implementation block
-(NSString *)remoteBundleIdentifier;
-(NSString *)localBundleIdentifier;
-(id)identifierForMostRecentData;
-(void)setRemoteBundleIdentifier:(NSString *)arg1 ;
-(void)setLocalBundleIdentifier:(NSString *)arg1 ;
-(NSDate *)remoteDonationCreationDate;
-(void)setRemoteDonationCreationDate:(NSDate *)arg1 ;
-(NSDate *)localDonationCreationDate;
-(void)setLocalDonationCreationDate:(NSDate *)arg1 ;
@end

