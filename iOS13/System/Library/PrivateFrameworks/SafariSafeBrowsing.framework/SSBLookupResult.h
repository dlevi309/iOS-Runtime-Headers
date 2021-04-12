/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPhishing;
-(BOOL)isMalware;
-(NSArray *)serviceLookupResults;
-(BOOL)isUnwantedSoftware;
-(id)_initWithServiceLookUpResults:(id)arg1 URLContainsUserInfo:(BOOL)arg2 ;
-(BOOL)isKnownToBeUnsafe;
-(id)_initWithServiceLookUpResults:(id)arg1 ;
-(BOOL)URLContainsUserInfo;
@end

