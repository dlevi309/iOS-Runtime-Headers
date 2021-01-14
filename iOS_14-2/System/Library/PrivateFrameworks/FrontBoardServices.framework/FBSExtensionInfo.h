/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(NSString *)typeIdentifier;
-(id)_initWithBundleProxy:(id)arg1 url:(id)arg2 ;
-(id)_initWithPlugInKitProxy:(id)arg1 ;
-(NSString *)extensionIdentifier;
@end

