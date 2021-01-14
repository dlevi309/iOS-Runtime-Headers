/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 includeIcon:(BOOL)arg2 includeBadgeIcon:(BOOL)arg3 ;
-(BOOL)includeIcon;
-(BOOL)includeBadgeIcon;
-(BOOL)isEqualToApplicationDescriptor:(id)arg1 ;
@end

