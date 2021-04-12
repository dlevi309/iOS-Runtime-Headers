/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@class NSString;

@interface CXCallDirectoryStoreIdentificationEntry : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _localizedLabel;

}

@property (nonatomic,copy) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedLabel;                         //@synthesize localizedLabel=_localizedLabel - In the implementation block
-(NSString *)localizedLabel;
-(void)setExtensionBundleIdentifier:(NSString *)arg1 ;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)extensionBundleIdentifier;
@end

