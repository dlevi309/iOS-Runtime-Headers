/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKTrust.h>

@class NSString;

@interface CRKConcreteTrust : NSObject <CRKTrust> {

	SecTrustRef _underlyingTrust;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCertificate> leafCertificate; 
@property (nonatomic,readonly) SecTrustRef underlyingTrust;                     //@synthesize underlyingTrust=_underlyingTrust - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(SecTrustRef)underlyingTrust;
-(id<CRKCertificate>)leafCertificate;
@end

