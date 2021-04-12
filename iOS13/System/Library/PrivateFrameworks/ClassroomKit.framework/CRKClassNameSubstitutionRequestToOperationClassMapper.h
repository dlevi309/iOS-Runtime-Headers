/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKRequestToOperationClassMapping.h>

@class NSArray, NSString;

@interface CRKClassNameSubstitutionRequestToOperationClassMapper : NSObject <CRKRequestToOperationClassMapping> {

	NSArray* mAllowedPrefixes;
	NSString* mOperationPrefix;

}
-(id)init;
-(id)initWithAllowedRequestPrefixes:(id)arg1 operationPrefix:(id)arg2 ;
-(id)stringByApplyingOperationSuffixToString:(id)arg1 ;
-(id)stringByApplyingOperationPrefixToString:(id)arg1 ;
-(id)prefixForString:(id)arg1 ;
-(Class)operationClassForRequest:(id)arg1 ;
@end

