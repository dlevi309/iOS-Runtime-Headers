/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _roamingEnabled;
	NSString* _domainName;
	NSArray* _roamingConsortiumOIs;
	NSArray* _naiRealmNames;
	NSArray* _MCCAndMNCs;

}

@property (readonly) NSString * domainName;                           //@synthesize domainName=_domainName - In the implementation block
@property (getter=isRoamingEnabled) BOOL roamingEnabled;              //@synthesize roamingEnabled=_roamingEnabled - In the implementation block
@property (copy) NSArray * roamingConsortiumOIs;                      //@synthesize roamingConsortiumOIs=_roamingConsortiumOIs - In the implementation block
@property (copy) NSArray * naiRealmNames;                             //@synthesize naiRealmNames=_naiRealmNames - In the implementation block
@property (copy) NSArray * MCCAndMNCs;                                //@synthesize MCCAndMNCs=_MCCAndMNCs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainName;
-(BOOL)isRoamingEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)roamingConsortiumOIs;
-(void)setRoamingConsortiumOIs:(NSArray *)arg1 ;
-(NSArray *)MCCAndMNCs;
-(void)setMCCAndMNCs:(NSArray *)arg1 ;
-(void)setRoamingEnabled:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDomainName:(id)arg1 roamingEnabled:(BOOL)arg2 ;
-(void)setNaiRealmNames:(NSArray *)arg1 ;
-(NSArray *)naiRealmNames;
@end

