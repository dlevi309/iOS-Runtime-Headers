/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding> {

	NSString* _extensionIdentifier;
	NSString* _localizedExtensionName;
	NSString* _localizedExtensionContainingAppName;
	NSString* _localizedLabel;

}

@property (nonatomic,copy) NSString * extensionIdentifier;                              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedExtensionName;                           //@synthesize localizedExtensionName=_localizedExtensionName - In the implementation block
@property (nonatomic,copy) NSString * localizedExtensionContainingAppName;              //@synthesize localizedExtensionContainingAppName=_localizedExtensionContainingAppName - In the implementation block
@property (nonatomic,copy) NSString * localizedLabel;                                   //@synthesize localizedLabel=_localizedLabel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(NSString *)localizedExtensionContainingAppName;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)localizedExtensionName;
-(void)setLocalizedExtensionName:(NSString *)arg1 ;
-(void)setLocalizedExtensionContainingAppName:(NSString *)arg1 ;
@end

