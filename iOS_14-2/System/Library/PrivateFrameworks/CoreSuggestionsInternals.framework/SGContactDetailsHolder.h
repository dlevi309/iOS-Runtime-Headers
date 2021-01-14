/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSArray, SGContactDetail;

@interface SGContactDetailsHolder : NSObject {

	NSArray* _emailAddresses;
	NSArray* _postalAddresses;
	NSArray* _phoneNumbers;
	NSArray* _instantMessageAddresses;
	NSArray* _socialProfiles;
	SGContactDetail* _birthday;
	SGContactDetail* _photoPath;

}

@property (nonatomic,retain) NSArray * emailAddresses;                       //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSArray * postalAddresses;                      //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,retain) NSArray * phoneNumbers;                         //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSArray * instantMessageAddresses;              //@synthesize instantMessageAddresses=_instantMessageAddresses - In the implementation block
@property (nonatomic,retain) NSArray * socialProfiles;                       //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,retain) SGContactDetail * birthday;                     //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,retain) SGContactDetail * photoPath;                    //@synthesize photoPath=_photoPath - In the implementation block
-(NSArray *)instantMessageAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)setBirthday:(SGContactDetail *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(SGContactDetail *)photoPath;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(NSArray *)emailAddresses;
-(NSArray *)postalAddresses;
-(SGContactDetail *)birthday;
-(NSArray *)socialProfiles;
-(void)setPhotoPath:(SGContactDetail *)arg1 ;
-(NSArray *)phoneNumbers;
@end

