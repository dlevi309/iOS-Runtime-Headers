/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding> {

	NSString* _localizedExtensionBundleDisplayName;

}

@property (nonatomic,readonly) NSString * localizedExtensionBundleDisplayName;              //@synthesize localizedExtensionBundleDisplayName=_localizedExtensionBundleDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedExtensionBundleDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLocalizedExtensionBundleDisplayName:(id)arg1 ;
@end

