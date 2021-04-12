/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/

#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding> {

	LookupResult _lookupResult;

}

@property (nonatomic,readonly) NSString * provider; 
@property (getter=isPhishing,nonatomic,readonly) BOOL phishing; 
@property (getter=isMalware,nonatomic,readonly) BOOL malware; 
@property (getter=isUnwantedSoftware,nonatomic,readonly) BOOL unwantedSoftware; 
@property (getter=isKnownToBeUnsafe,nonatomic,readonly) BOOL knownToBeUnsafe; 
+(BOOL)supportsSecureCoding;
-(NSString *)provider;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPhishing;
-(id)_initWithLookupResult:(LookupResult)arg1 ;
-(BOOL)isUnwantedSoftware;
-(BOOL)isKnownToBeUnsafe;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isMalware;
@end

