/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutInstruction.h>

@class NSString;

@interface SXFirstViewportLayoutInstruction : NSObject <SXLayoutInstruction> {

	BOOL _fullfilled;

}

@property (assign,nonatomic) BOOL fullfilled;                       //@synthesize fullfilled=_fullfilled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFulfilledForBlueprint:(id)arg1 ;
-(void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(BOOL)fullfilled;
-(void)setFullfilled:(BOOL)arg1 ;
@end

