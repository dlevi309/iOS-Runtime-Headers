/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLArgumentEncoder;
#import <SceneKit/SceneKit-Structs.h>
@class NSMutableArray, MTLArgument, NSString;

@interface SCNMTLResourceBinding : NSObject {

	BOOL _needsRenderResource;
	SCD_Struct_SC51 _indices;
	SCD_Struct_SC51 _samplerIndices;
	NSMutableArray* _usedResources;
	id _bindBlock;
	MTLArgument* _argument;
	id<MTLArgumentEncoder> _argumentEncoder;

}

@property (nonatomic,retain) MTLArgument * argument;                              //@synthesize argument=_argument - In the implementation block
@property (nonatomic,retain) id<MTLArgumentEncoder> argumentEncoder;              //@synthesize argumentEncoder=_argumentEncoder - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSMutableArray * usedResources; 
@property (assign,nonatomic) BOOL needsRenderResource; 
@property (nonatomic,copy) id bindBlock;                                          //@synthesize bindBlock=_bindBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned long long)type;
-(MTLArgument *)argument;
-(void)setBindBlock:(id)arg1 ;
-(id)bindBlock;
-(BOOL)needsRenderResource;
-(id<MTLArgumentEncoder>)argumentEncoder;
-(NSMutableArray *)usedResources;
-(void)setNeedsRenderResource:(BOOL)arg1 ;
-(void)setArgument:(MTLArgument *)arg1 ;
-(void)setArgumentEncoder:(id<MTLArgumentEncoder>)arg1 ;
@end

