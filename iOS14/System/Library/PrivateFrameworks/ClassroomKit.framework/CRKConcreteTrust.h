/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKTrust.h>

@class NSString;

@interface CRKConcreteTrust : NSObject <CRKTrust> {

	SecTrustRef _underlyingTrust;

}

@property (nonatomic,readonly) id<CRKCertificate> leafCertificate; 
@property (nonatomic,readonly) SecTrustRef underlyingTrust;                     //@synthesize underlyingTrust=_underlyingTrust - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)dealloc;
-(id<CRKCertificate>)leafCertificate;
-(SecTrustRef)underlyingTrust;
@end

