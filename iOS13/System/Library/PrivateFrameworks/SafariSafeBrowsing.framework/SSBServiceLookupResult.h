/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)provider;
-(BOOL)isPhishing;
-(BOOL)isMalware;
-(BOOL)isUnwantedSoftware;
-(id)_initWithLookupResult:(LookupResult)arg1 ;
-(BOOL)isKnownToBeUnsafe;
@end

