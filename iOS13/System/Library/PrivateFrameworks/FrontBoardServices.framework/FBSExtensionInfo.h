/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSBundleInfo.h>

@class NSString;

@interface FBSExtensionInfo : FBSBundleInfo {

	NSString* _typeIdentifier;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * typeIdentifier;                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
-(NSString *)typeIdentifier;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(id)_initWithBundleProxy:(id)arg1 url:(id)arg2 ;
-(id)_initWithPlugInKitProxy:(id)arg1 ;
-(NSString *)extensionIdentifier;
@end

