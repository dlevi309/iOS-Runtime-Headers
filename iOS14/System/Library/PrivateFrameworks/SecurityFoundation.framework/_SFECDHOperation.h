/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeyDerivingOperation.h>

@class NSString;

@interface _SFECDHOperation : NSObject <SFKeyDerivingOperation> {

	id _ecdhOperationInternal;

}

@property (assign,nonatomic) long long mode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)keySource;
+(long long)_defaultMode;
+(id)_defaultOperation;
-(long long)mode;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(void)setMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3 ;
@end

