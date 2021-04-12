/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFVersion.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMDAccessoryVersion : HMFVersion <NSCopying, NSSecureCoding> {

	NSString* _rawVersionString;

}

@property (nonatomic,copy,readonly) NSString * rawVersionString;              //@synthesize rawVersionString=_rawVersionString - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVersionString:(id)arg1 ;
-(NSString *)rawVersionString;
@end

