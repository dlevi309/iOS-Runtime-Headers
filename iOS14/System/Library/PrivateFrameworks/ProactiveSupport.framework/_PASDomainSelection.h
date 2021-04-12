/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(id)initWithDomainsFromArray:(id)arg1 ;
-(id)init;
-(id)initWithDomain:(id)arg1 ;
-(id)_initWithNonOverlappingDomainSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDomainsFromSet:(id)arg1 ;
-(id)description;
-(id)globPatterns;
-(BOOL)containsDomain:(id)arg1 ;
-(id)allDomains;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToDomainSelection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

