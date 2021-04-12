/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFSoftwareVersion.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMDAccessoryVersion : HMFSoftwareVersion <NSCopying, NSSecureCoding> {

	NSString* _rawVersionString;

}

@property (nonatomic,copy,readonly) NSString * rawVersionString;              //@synthesize rawVersionString=_rawVersionString - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithVersionString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)rawVersionString;
@end

