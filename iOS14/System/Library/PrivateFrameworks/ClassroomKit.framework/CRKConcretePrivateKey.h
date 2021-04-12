/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKPrivateKey.h>

@class NSData, NSString;

@interface CRKConcretePrivateKey : NSObject <CRKPrivateKey> {

	_SecKey* _underlyingPrivateKey;

}

@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) _SecKey* underlyingPrivateKey;                 //@synthesize underlyingPrivateKey=_underlyingPrivateKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)privateKeyWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSString *)description;
-(void)dealloc;
-(_SecKey*)underlyingPrivateKey;
-(id)initWithPrivateKey:(_SecKey*)arg1 ;
@end

