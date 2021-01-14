/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_LSQuery.h>

@class NSString;

@interface _LSApplicationIsInstalledQuery : _LSQuery {

	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queryWithBundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(id)initWithCoder:(id)arg1 ;
@end

