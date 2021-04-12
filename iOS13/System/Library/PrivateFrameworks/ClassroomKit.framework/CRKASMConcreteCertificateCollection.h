/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMCertificateCollection.h>

@class NSArray;

@interface CRKASMConcreteCertificateCollection : NSObject <CRKASMCertificateCollection> {

	NSArray* _certificates;

}

@property (nonatomic,copy,readonly) NSArray * certificates;              //@synthesize certificates=_certificates - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)certificates;
-(id)initWithCertificates:(id)arg1 ;
-(id)operationToRefreshCollection;
@end

