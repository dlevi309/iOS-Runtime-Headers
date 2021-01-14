/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSUUID, NSArray, NSString, NSDictionary;

@interface _PSPredictionContext : NSObject <NSSecureCoding> {

	BOOL _showPotentialFamilyMembers;
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
@property (assign,nonatomic) BOOL showPotentialFamilyMembers;                                        //@synthesize showPotentialFamilyMembers=_showPotentialFamilyMembers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setLocationUUID:(NSUUID *)arg1 ;
-(NSArray *)attachments;
-(NSUUID *)locationUUID;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setShowPotentialFamilyMembers:(BOOL)arg1 ;
-(NSDictionary *)appBundleIdsToShareExtensionBundleIdsMapping;
-(NSDate *)suggestionDate;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPhotoSuggestedPeople:(NSArray *)arg1 ;
-(void)setLocationType:(long long)arg1 ;
-(void)setSuggestionDate:(NSDate *)arg1 ;
-(NSArray *)photoSuggestedPeople;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setCandidateShareExtensionBundleIds:(NSArray *)arg1 ;
-(void)setSeedRecipients:(NSArray *)arg1 ;
-(long long)locationType;
-(NSArray *)candidateShareExtensionBundleIds;
-(NSString *)bundleID;
-(NSArray *)locationUUIDs;
-(id)initWithCoder:(id)arg1 ;
-(void)setAppBundleIdsToShareExtensionBundleIdsMapping:(NSDictionary *)arg1 ;
-(BOOL)showPotentialFamilyMembers;
-(NSArray *)seedRecipients;
-(void)setLocationUUIDs:(NSArray *)arg1 ;
@end

