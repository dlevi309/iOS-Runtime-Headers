/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	unsigned long long _stateFlags;
	int _ratingRank;
	unsigned long long _installType;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isRemovedSystemApp,nonatomic,readonly) BOOL removedSystemApp; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (getter=isAlwaysAvailable,nonatomic,readonly) BOOL alwaysAvailable; 
@property (getter=isDowngraded,nonatomic,readonly) BOOL downgraded; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isInstalled;
-(BOOL)isRestricted;
-(BOOL)isPlaceholder;
-(BOOL)isBlocked;
-(BOOL)isAlwaysAvailable;
-(id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3 installType:(unsigned long long)arg4 ;
-(BOOL)isRemovedSystemApp;
-(BOOL)isDowngraded;
-(void)addStateFlag:(unsigned long long)arg1 ;
@end

