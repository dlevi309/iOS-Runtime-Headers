/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(CTDataUsage *)usage;
-(NSString *)bundleId;
-(CTDataUsed *)used;
-(id)init:(id)arg1 withDisplayName:(id)arg2 andUsage:(id)arg3 ;
@end

