/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSArray, ASTIdentity;

@interface ASTProfileResult : ASTSealablePayload {

	NSArray* _properties;
	NSArray* _tests;
	ASTIdentity* _identity;

}

@property (nonatomic,readonly) ASTIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSArray * properties;                  //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSArray * tests;                       //@synthesize tests=_tests - In the implementation block
+(id)resultWithIdentity:(id)arg1 ;
+(id)sealedProfileResultWithPayload:(id)arg1 signature:(id)arg2 ;
-(id)init;
-(ASTIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)tests;
-(void)setTests:(NSArray *)arg1 ;
-(id)generatePayload;
@end

