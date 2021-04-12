/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface CNContactRecentsReference : NSObject <NSSecureCoding> {

	NSNumber* _recentContactID;
	NSString* _domain;

}

@property (nonatomic,readonly) NSNumber * recentContactID;              //@synthesize recentContactID=_recentContactID - In the implementation block
@property (nonatomic,readonly) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecentContactID:(id)arg1 domain:(id)arg2 ;
-(NSNumber *)recentContactID;
-(NSString *)domain;
-(id)initWithCoder:(id)arg1 ;
@end

