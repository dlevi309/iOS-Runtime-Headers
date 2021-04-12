/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSApplicationTrustDataProvider.h>

@protocol FBSApplicationTrustDataProvider;
@class FBSSignatureValidationService, NSString;

@interface FBSApplicationTrustFacade : NSObject <FBSApplicationTrustDataProvider> {

	id<FBSApplicationTrustDataProvider> _legacyProvider;
	id<FBSApplicationTrustDataProvider> _modernProvider;
	FBSSignatureValidationService* _authoritativeProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)trustStateForApplication:(id)arg1 ;
@end

