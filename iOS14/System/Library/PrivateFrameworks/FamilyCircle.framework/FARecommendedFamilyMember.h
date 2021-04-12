/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding> {

	NSString* _handle;
	NSString* _displayName;
	CNContact* _contact;

}

@property (nonatomic,copy) NSString * handle;                   //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) CNContact * contact;               //@synthesize contact=_contact - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(NSString *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(id)_safeClasses;
-(id)initWithRecommendation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

