/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding> {

	NSString* _localizedExtensionBundleDisplayName;

}

@property (nonatomic,readonly) NSString * localizedExtensionBundleDisplayName;              //@synthesize localizedExtensionBundleDisplayName=_localizedExtensionBundleDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedExtensionBundleDisplayName;
-(id)initWithLocalizedExtensionBundleDisplayName:(id)arg1 ;
@end

