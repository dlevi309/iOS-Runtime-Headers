/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAdmin;
-(id)initWithAdminStatus:(BOOL)arg1 dateUpdated:(id)arg2 ;
-(NSDate *)dateUpdated;
@end

