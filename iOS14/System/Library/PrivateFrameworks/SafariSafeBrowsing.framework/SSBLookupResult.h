/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/

#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _URLContainsUserInfo;
	NSArray* _serviceLookupResults;

}

@property (nonatomic,readonly) NSArray * serviceLookupResults;                               //@synthesize serviceLookupResults=_serviceLookupResults - In the implementation block
@property (nonatomic,readonly) BOOL URLContainsUserInfo;                                     //@synthesize URLContainsUserInfo=_URLContainsUserInfo - In the implementation block
@property (getter=isPhishing,nonatomic,readonly) BOOL phishing; 
@property (getter=isMalware,nonatomic,readonly) BOOL malware; 
@property (getter=isUnwantedSoftware,nonatomic,readonly) BOOL unwantedSoftware; 
@property (getter=isKnownToBeUnsafe,nonatomic,readonly) BOOL knownToBeUnsafe; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPhishing;
-(id)_initWithServiceLookUpResults:(id)arg1 URLContainsUserInfo:(BOOL)arg2 ;
-(BOOL)isUnwantedSoftware;
-(BOOL)isKnownToBeUnsafe;
-(id)_initWithServiceLookUpResults:(id)arg1 ;
-(NSArray *)serviceLookupResults;
-(BOOL)URLContainsUserInfo;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isMalware;
@end

