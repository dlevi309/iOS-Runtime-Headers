/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMBusinessUserAttributes : FATObject {

	NSString* _title;
	NSString* _location;
	NSString* _department;
	NSString* _mobilePhone;
	NSString* _linkedInProfileUrl;
	NSString* _workPhone;
	NSNumber* _companyStartDate;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * department;                      //@synthesize department=_department - In the implementation block
@property (nonatomic,retain) NSString * mobilePhone;                     //@synthesize mobilePhone=_mobilePhone - In the implementation block
@property (nonatomic,retain) NSString * linkedInProfileUrl;              //@synthesize linkedInProfileUrl=_linkedInProfileUrl - In the implementation block
@property (nonatomic,retain) NSString * workPhone;                       //@synthesize workPhone=_workPhone - In the implementation block
@property (nonatomic,retain) NSNumber * companyStartDate;                //@synthesize companyStartDate=_companyStartDate - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)location;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)mobilePhone;
-(void)setLocation:(NSString *)arg1 ;
-(void)setWorkPhone:(NSString *)arg1 ;
-(void)setMobilePhone:(NSString *)arg1 ;
-(void)setDepartment:(NSString *)arg1 ;
-(NSString *)department;
-(NSString *)workPhone;
-(NSString *)title;
-(NSString *)linkedInProfileUrl;
-(void)setLinkedInProfileUrl:(NSString *)arg1 ;
-(NSNumber *)companyStartDate;
-(void)setCompanyStartDate:(NSNumber *)arg1 ;
@end

