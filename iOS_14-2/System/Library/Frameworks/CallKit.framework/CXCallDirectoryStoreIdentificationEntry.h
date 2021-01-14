/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@class NSString;

@interface CXCallDirectoryStoreIdentificationEntry : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _localizedLabel;

}

@property (nonatomic,copy) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedLabel;                         //@synthesize localizedLabel=_localizedLabel - In the implementation block
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(void)setExtensionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)extensionBundleIdentifier;
@end

