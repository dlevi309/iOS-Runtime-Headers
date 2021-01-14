/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isBlocked;
-(BOOL)isRestricted;
-(void)addStateFlag:(unsigned long long)arg1 ;
-(BOOL)isPlaceholder;
-(BOOL)isDowngraded;
-(id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3 installType:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isInstalled;
-(id)description;
-(BOOL)isValid;
-(BOOL)isAlwaysAvailable;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRemovedSystemApp;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

