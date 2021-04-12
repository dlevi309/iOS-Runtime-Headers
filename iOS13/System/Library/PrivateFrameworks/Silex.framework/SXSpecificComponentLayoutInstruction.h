/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutInstruction.h>

@class NSString;

@interface SXSpecificComponentLayoutInstruction : NSObject <SXLayoutInstruction> {

	NSString* _componentIdentifier;

}

@property (nonatomic,readonly) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instructionWithIdentifier:(id)arg1 ;
-(NSString *)description;
-(NSString *)componentIdentifier;
-(BOOL)isFulfilledForBlueprint:(id)arg1 ;
@end

