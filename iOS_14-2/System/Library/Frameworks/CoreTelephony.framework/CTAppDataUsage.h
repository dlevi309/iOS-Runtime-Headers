/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTDataUsed, CTDataUsage;

@interface CTAppDataUsage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleId;
	NSString* _displayName;
	CTDataUsed* _used;

}

@property (nonatomic,readonly) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) CTDataUsed * used;                   //@synthesize used=_used - In the implementation block
@property (nonatomic,readonly) CTDataUsage * usage; 
+(BOOL)supportsSecureCoding;
-(CTDataUsed *)used;
-(CTDataUsage *)usage;
-(id)init:(id)arg1 withDisplayName:(id)arg2 andUsage:(id)arg3 ;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

