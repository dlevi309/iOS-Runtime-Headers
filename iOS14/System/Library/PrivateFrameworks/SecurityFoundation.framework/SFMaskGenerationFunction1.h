/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFMaskGenerationFunction.h>

@class NSString;

@interface SFMaskGenerationFunction1 : NSObject <SFMaskGenerationFunction> {

	id _mgf1OperationInternal;

}

@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(id)initWithDigestOperation:(id)arg1 ;
-(id)generateMaskWithLength:(long long)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
@end

