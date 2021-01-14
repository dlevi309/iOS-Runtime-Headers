/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSSecureCoding;
@class NSError;

@interface CNTestFuture : NSObject <NSSecureCoding> {

	id<NSObject><NSSecureCoding> _result;
	NSError* _error;

}

@property (nonatomic,readonly) id<NSObject><NSSecureCoding> result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithError:(id)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id<NSObject><NSSecureCoding>)result;
-(id)initWithCoder:(id)arg1 ;
@end

