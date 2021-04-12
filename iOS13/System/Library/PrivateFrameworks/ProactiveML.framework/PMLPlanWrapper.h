/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@protocol PMLPlanProtocol;
@class NSString;

@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol> {

	id<PMLPlanProtocol> _plan;

}

@property (nonatomic,readonly) id<PMLPlanProtocol> plan;              //@synthesize plan=_plan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PMLPlanProtocol>)plan;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithPlan:(id)arg1 ;
@end

