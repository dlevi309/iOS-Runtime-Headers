/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CRKApplicationDescriptor : NSObject <NSCopying, NSSecureCoding> {

	BOOL _includeIcon;
	BOOL _includeBadgeIcon;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL includeIcon;                              //@synthesize includeIcon=_includeIcon - In the implementation block
@property (nonatomic,readonly) BOOL includeBadgeIcon;                         //@synthesize includeBadgeIcon=_includeBadgeIcon - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 includeIcon:(BOOL)arg2 includeBadgeIcon:(BOOL)arg3 ;
-(BOOL)includeIcon;
-(BOOL)includeBadgeIcon;
-(BOOL)isEqualToApplicationDescriptor:(id)arg1 ;
@end

