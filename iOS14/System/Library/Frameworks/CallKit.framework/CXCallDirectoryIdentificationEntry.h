/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(id)description;
-(NSString *)localizedExtensionContainingAppName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(NSString *)localizedExtensionName;
-(void)setLocalizedExtensionName:(NSString *)arg1 ;
-(void)setLocalizedExtensionContainingAppName:(NSString *)arg1 ;
@end

