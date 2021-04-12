/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class NSString;

@interface MSCriterion : NSObject <NSSecureCoding> {

	NSString* _type;
	NSString* _qualifier;
	id<NSObject> _criteria;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3 ;
-(id)initWithCriteria:(id)arg1 allRequired:(BOOL)arg2 ;
-(id)qualifier;
-(id)criteria;
-(id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3 ;
@end

