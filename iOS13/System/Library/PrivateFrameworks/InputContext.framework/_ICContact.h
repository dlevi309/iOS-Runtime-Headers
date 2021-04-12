/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


@class NSString, NSArray;

@interface _ICContact : NSObject {

	NSString* _firstName;
	NSString* _phoneticFirstName;
	NSString* _middleName;
	NSString* _phoneticMiddleName;
	NSString* _lastName;
	NSString* _phoneticLastName;
	NSString* _organizationName;
	NSString* _jobTitle;
	NSString* _nickname;
	NSArray* _relations;
	NSArray* _streets;
	NSArray* _cities;
	double _score;

}

@property (nonatomic,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,readonly) NSString * organizationName;                //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,readonly) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,readonly) NSArray * relations;                        //@synthesize relations=_relations - In the implementation block
@property (nonatomic,readonly) NSArray * streets;                          //@synthesize streets=_streets - In the implementation block
@property (nonatomic,readonly) NSArray * cities;                           //@synthesize cities=_cities - In the implementation block
@property (nonatomic,readonly) double score;                               //@synthesize score=_score - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)middleName;
-(NSString *)nickname;
-(double)score;
-(NSString *)organizationName;
-(NSArray *)relations;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)phoneticMiddleName;
-(NSString *)jobTitle;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSArray *)cities;
-(BOOL)isEqualToContact:(id)arg1 ;
-(id)flatten;
-(id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relations:(id)arg10 streets:(id)arg11 cities:(id)arg12 score:(double)arg13 ;
-(NSArray *)streets;
@end

