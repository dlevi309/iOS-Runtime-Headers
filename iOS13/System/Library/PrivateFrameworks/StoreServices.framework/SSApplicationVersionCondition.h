/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSProtocolCondition.h>

@class NSString, NSNumber;

@interface SSApplicationVersionCondition : SSProtocolCondition {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _externalVersion;

}
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)evaluateWithContext:(id)arg1 ;
@end

