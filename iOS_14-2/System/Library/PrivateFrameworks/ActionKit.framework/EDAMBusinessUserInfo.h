/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessUserInfo : FATObject {

	NSNumber* _businessId;
	NSString* _businessName;
	NSNumber* _role;
	NSString* _email;
	NSNumber* _updated;

}

@property (nonatomic,retain) NSNumber * businessId;                //@synthesize businessId=_businessId - In the implementation block
@property (nonatomic,retain) NSString * businessName;              //@synthesize businessName=_businessName - In the implementation block
@property (nonatomic,retain) NSNumber * role;                      //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) NSString * email;                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * updated;                   //@synthesize updated=_updated - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setEmail:(NSString *)arg1 ;
-(void)setRole:(NSNumber *)arg1 ;
-(NSNumber *)updated;
-(void)setBusinessId:(NSNumber *)arg1 ;
-(void)setUpdated:(NSNumber *)arg1 ;
-(NSNumber *)businessId;
-(NSString *)businessName;
-(void)setBusinessName:(NSString *)arg1 ;
-(NSNumber *)role;
-(NSString *)email;
@end

