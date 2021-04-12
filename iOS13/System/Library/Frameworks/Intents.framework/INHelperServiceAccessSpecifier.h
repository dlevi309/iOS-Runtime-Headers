/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)associatedAppBundleIdentifier;
-(id)initWithAccessLevel:(unsigned long long)arg1 associatedAppBundleIdentifier:(id)arg2 ;
-(unsigned long long)accessLevel;
@end

