/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDomain:(id)arg1 ;
-(id)_initWithNonOverlappingDomainSet:(id)arg1 ;
-(id)initWithDomainsFromArray:(id)arg1 ;
-(id)initWithDomainsFromSet:(id)arg1 ;
-(BOOL)containsDomain:(id)arg1 ;
-(id)allDomains;
-(id)globPatterns;
-(BOOL)isEqualToDomainSelection:(id)arg1 ;
@end

