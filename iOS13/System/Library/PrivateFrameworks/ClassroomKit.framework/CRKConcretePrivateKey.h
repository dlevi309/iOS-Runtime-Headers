/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKPrivateKey.h>

@class NSData, NSString;

@interface CRKConcretePrivateKey : NSObject <CRKPrivateKey> {

	_SecKey* _underlyingPrivateKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) _SecKey* underlyingPrivateKey;                 //@synthesize underlyingPrivateKey=_underlyingPrivateKey - In the implementation block
+(id)privateKeyWithData:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSData *)dataRepresentation;
-(_SecKey*)underlyingPrivateKey;
-(id)initWithPrivateKey:(_SecKey*)arg1 ;
@end

