/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSApplicationInfoProvider.h>

@class NSString;

@interface FBSLazyApplicationInfoProvider : NSObject <FBSApplicationInfoProvider> {

	Class _applicationInfoSubclass;

}

@property (assign,nonatomic) Class applicationInfoSubclass;              //@synthesize applicationInfoSubclass=_applicationInfoSubclass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)applicationInfoForBundleIdentifier:(id)arg1 ;
-(Class)applicationInfoSubclass;
-(void)setApplicationInfoSubclass:(Class)arg1 ;
@end

