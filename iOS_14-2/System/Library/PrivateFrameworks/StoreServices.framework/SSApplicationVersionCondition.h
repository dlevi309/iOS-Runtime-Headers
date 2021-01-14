/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSProtocolCondition.h>

@class NSString, NSNumber;

@interface SSApplicationVersionCondition : SSProtocolCondition {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _externalVersion;

}
-(BOOL)evaluateWithContext:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)dealloc;
@end

