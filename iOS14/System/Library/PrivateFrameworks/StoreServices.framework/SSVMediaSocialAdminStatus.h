/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface SSVMediaSocialAdminStatus : NSObject <NSSecureCoding> {

	BOOL _admin;
	NSDate* _dateUpdated;

}

@property (nonatomic,readonly) NSDate * dateUpdated;                   //@synthesize dateUpdated=_dateUpdated - In the implementation block
@property (getter=isAdmin,nonatomic,readonly) BOOL admin;              //@synthesize admin=_admin - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isAdmin;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAdminStatus:(BOOL)arg1 dateUpdated:(id)arg2 ;
-(NSDate *)dateUpdated;
@end

