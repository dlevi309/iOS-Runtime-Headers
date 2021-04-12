/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation;

@interface ATXLocationManagerKnownLOIs : NSObject <NSSecureCoding> {

	CLLocation* Home;
	CLLocation* Work;
	CLLocation* School;
	CLLocation* Gym;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

