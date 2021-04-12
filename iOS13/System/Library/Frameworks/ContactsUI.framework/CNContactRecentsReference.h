/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecentContactID:(id)arg1 domain:(id)arg2 ;
-(NSNumber *)recentContactID;
@end

