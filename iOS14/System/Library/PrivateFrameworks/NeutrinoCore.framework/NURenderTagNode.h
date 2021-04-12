/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderNode.h>

@class NSString, NURenderNode;

@interface NURenderTagNode : NURenderNode {

	NSString* _name;

}

@property (readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (retain) NURenderNode * input; 
+(BOOL)validateName:(id)arg1 error:(out id*)arg2 ;
-(NURenderNode *)input;
-(void)setInput:(NURenderNode *)arg1 ;
-(NSString *)name;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)_evaluateGeometrySpaceMap:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)descriptionSubClassHook;
-(id)_descriptionWithOffset:(long long)arg1 showInputs:(BOOL)arg2 ;
-(id)initWithInput:(id)arg1 name:(id)arg2 ;
@end

