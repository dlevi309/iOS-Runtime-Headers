/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSNumber, NSDictionary;

@interface AMSFamilyMember : NSObject {

	BOOL _askToBuyEnabled;
	BOOL _currentSignedInUser;
	BOOL _sharingPurchases;
	NSString* _firstName;
	NSNumber* _iCloudDSID;
	NSString* _iCloudUsername;
	NSNumber* _iTunesDSID;
	NSString* _iTunesUsername;
	NSString* _lastName;

}

@property (assign,getter=isCurrentSignedInUser,nonatomic) BOOL currentSignedInUser;              //@synthesize currentSignedInUser=_currentSignedInUser - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isAskToBuyEnabled,nonatomic,readonly) BOOL askToBuyEnabled;                    //@synthesize askToBuyEnabled=_askToBuyEnabled - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                                             //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSNumber * iCloudDSID;                                            //@synthesize iCloudDSID=_iCloudDSID - In the implementation block
@property (nonatomic,readonly) NSString * iCloudUsername;                                        //@synthesize iCloudUsername=_iCloudUsername - In the implementation block
@property (nonatomic,readonly) NSNumber * iTunesDSID;                                            //@synthesize iTunesDSID=_iTunesDSID - In the implementation block
@property (nonatomic,readonly) NSString * iTunesUsername;                                        //@synthesize iTunesUsername=_iTunesUsername - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                                              //@synthesize lastName=_lastName - In the implementation block
@property (getter=isSharingPurchases,nonatomic,readonly) BOOL sharingPurchases;                  //@synthesize sharingPurchases=_sharingPurchases - In the implementation block
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isSharingPurchases;
-(BOOL)isAskToBuyEnabled;
-(NSNumber *)iCloudDSID;
-(NSNumber *)iTunesDSID;
-(void)setCurrentSignedInUser:(BOOL)arg1 ;
-(BOOL)isCurrentSignedInUser;
-(NSString *)iCloudUsername;
-(NSString *)iTunesUsername;
@end

