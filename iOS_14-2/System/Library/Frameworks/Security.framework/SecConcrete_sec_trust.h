/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_trust.h>

@class NSString;

@interface SecConcrete_sec_trust : NSObject <OS_sec_trust> {

	SecTrustRef trust;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)dealloc;
@end

