/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSUUID, NSArray, NSString, NSDictionary;

@interface _PSPredictionContext : NSObject <NSSecureCoding> {

	NSDate* _suggestionDate;
	NSUUID* _locationUUID;
	NSArray* _locationUUIDs;
	long long _locationType;
	NSString* _bundleID;
	NSString* _accountIdentifier;
	NSArray* _seedRecipients;
	NSArray* _candidateShareExtensionBundleIds;
	NSDictionary* _appBundleIdsToShareExtensionBundleIdsMapping;
	NSArray* _attachments;
	NSArray* _photoSuggestedPeople;

}

@property (nonatomic,copy) NSDate * suggestionDate;                                                  //@synthesize suggestionDate=_suggestionDate - In the implementation block
@property (nonatomic,copy) NSUUID * locationUUID;                                                    //@synthesize locationUUID=_locationUUID - In the implementation block
@property (nonatomic,copy) NSArray * locationUUIDs;                                                  //@synthesize locationUUIDs=_locationUUIDs - In the implementation block
@property (assign,nonatomic) long long locationType;                                                 //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * seedRecipients;                                                 //@synthesize seedRecipients=_seedRecipients - In the implementation block
@property (nonatomic,copy) NSArray * candidateShareExtensionBundleIds;                               //@synthesize candidateShareExtensionBundleIds=_candidateShareExtensionBundleIds - In the implementation block
@property (nonatomic,copy) NSDictionary * appBundleIdsToShareExtensionBundleIdsMapping;              //@synthesize appBundleIdsToShareExtensionBundleIdsMapping=_appBundleIdsToShareExtensionBundleIdsMapping - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                                  //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) NSArray * photoSuggestedPeople;                                           //@synthesize photoSuggestedPeople=_photoSuggestedPeople - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSUUID *)locationUUID;
-(void)setLocationUUID:(NSUUID *)arg1 ;
-(NSArray *)locationUUIDs;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(long long)locationType;
-(void)setAppBundleIdsToShareExtensionBundleIdsMapping:(NSDictionary *)arg1 ;
-(void)setLocationType:(long long)arg1 ;
-(NSDate *)suggestionDate;
-(NSArray *)photoSuggestedPeople;
-(void)setPhotoSuggestedPeople:(NSArray *)arg1 ;
-(void)setLocationUUIDs:(NSArray *)arg1 ;
-(void)setSuggestionDate:(NSDate *)arg1 ;
-(NSArray *)seedRecipients;
-(void)setSeedRecipients:(NSArray *)arg1 ;
-(NSArray *)candidateShareExtensionBundleIds;
-(void)setCandidateShareExtensionBundleIds:(NSArray *)arg1 ;
-(NSDictionary *)appBundleIdsToShareExtensionBundleIdsMapping;
@end

