/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)role;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setRole:(NSNumber *)arg1 ;
-(NSNumber *)businessId;
-(void)setBusinessId:(NSNumber *)arg1 ;
-(NSNumber *)updated;
-(void)setUpdated:(NSNumber *)arg1 ;
-(NSString *)businessName;
-(void)setBusinessName:(NSString *)arg1 ;
@end

