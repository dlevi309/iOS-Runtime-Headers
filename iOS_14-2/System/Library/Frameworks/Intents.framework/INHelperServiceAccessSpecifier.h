/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSString;

@interface INHelperServiceAccessSpecifier : NSObject {

	unsigned long long _accessLevel;
	NSString* _associatedAppBundleIdentifier;

}

@property (nonatomic,readonly) unsigned long long accessLevel;                             //@synthesize accessLevel=_accessLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
+(void)initialize;
+(id)accessSpecifierUnrestricted;
+(id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 ;
+(id)accessSpecifierWithNoAccess;
+(id)accessSpecifierAppropriateForCurrentProcess;
+(id)accessSpecifierAppropriateForXPCConnection:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)accessLevel;
-(id)initWithAccessLevel:(unsigned long long)arg1 associatedAppBundleIdentifier:(id)arg2 ;
-(NSString *)associatedAppBundleIdentifier;
@end

