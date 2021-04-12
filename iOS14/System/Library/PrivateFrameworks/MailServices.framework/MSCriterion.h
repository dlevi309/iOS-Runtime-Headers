/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCriteria:(id)arg1 allRequired:(BOOL)arg2 ;
-(id)qualifier;
-(id)description;
-(id)type;
-(id)criteria;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3 ;
@end

