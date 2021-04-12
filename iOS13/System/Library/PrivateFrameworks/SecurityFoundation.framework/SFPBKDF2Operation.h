/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeyDerivingOperation.h>

@class NSData, NSString;

@interface SFPBKDF2Operation : NSObject <SFKeyDerivingOperation> {

	id _pbkdf2OperationInternal;

}

@property (nonatomic,copy) id<SFPseudoRandomFunction> pseudoRandomFunction; 
@property (assign,nonatomic) long long iterationCount; 
@property (nonatomic,copy) NSData * salt; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_randomSalt;
+(long long)keySource;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)salt;
-(void)setSalt:(NSData *)arg1 ;
-(long long)iterationCount;
-(id<SFPseudoRandomFunction>)pseudoRandomFunction;
-(id)initWithPseudoRandomFunction:(id)arg1 iterationCount:(long long)arg2 salt:(id)arg3 ;
-(id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3 ;
-(void)setIterationCount:(long long)arg1 ;
-(void)setPseudoRandomFunction:(id<SFPseudoRandomFunction>)arg1 ;
@end

