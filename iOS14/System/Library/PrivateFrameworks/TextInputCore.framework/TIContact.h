/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSString, NSArray;

@interface TIContact : NSObject {

	BOOL _hasRelevancyScore;
	float _relevancyScore;
	NSString* _familyName;
	NSString* _phoneticFamilyName;
	NSString* _givenName;
	NSString* _phoneticGivenName;
	NSString* _middleName;
	NSString* _phoneticMiddleName;
	NSString* _organizationName;
	NSString* _jobTitle;
	NSString* _nickname;
	NSArray* _relations;
	NSArray* _cities;

}

@property (nonatomic,retain) NSString * familyName;                      //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,retain) NSString * phoneticFamilyName;              //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,retain) NSString * givenName;                       //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,retain) NSString * phoneticGivenName;               //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,retain) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,retain) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,retain) NSString * organizationName;                //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,retain) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,retain) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSArray * relations;                        //@synthesize relations=_relations - In the implementation block
@property (nonatomic,retain) NSArray * cities;                           //@synthesize cities=_cities - In the implementation block
@property (assign,nonatomic) BOOL hasRelevancyScore;                     //@synthesize hasRelevancyScore=_hasRelevancyScore - In the implementation block
@property (assign,nonatomic) float relevancyScore;                       //@synthesize relevancyScore=_relevancyScore - In the implementation block
-(NSString *)phoneticMiddleName;
-(NSString *)familyName;
-(NSArray *)relations;
-(NSString *)organizationName;
-(void)setJobTitle:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)givenName;
-(void)setRelations:(NSArray *)arg1 ;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSArray *)cities;
-(NSString *)phoneticFamilyName;
-(NSString *)jobTitle;
-(NSString *)middleName;
-(id)flatten;
-(void)setCities:(NSArray *)arg1 ;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)phoneticGivenName;
-(BOOL)hasRelevancyScore;
-(void)setHasRelevancyScore:(BOOL)arg1 ;
-(float)relevancyScore;
-(void)setRelevancyScore:(float)arg1 ;
@end

