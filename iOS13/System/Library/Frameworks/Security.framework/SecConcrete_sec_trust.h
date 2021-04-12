/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithTrust:(SecTrustRef)arg1 ;
@end

