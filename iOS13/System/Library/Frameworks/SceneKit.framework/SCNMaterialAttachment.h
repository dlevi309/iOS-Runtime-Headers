/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary;

@interface SCNMaterialAttachment : NSObject {

	unsigned glID;
	unsigned target;
	void* context;
	CGSize size;
	NSDictionary* options;

}

@property (assign,nonatomic) unsigned glID; 
@property (assign,nonatomic) unsigned target; 
@property (assign,nonatomic) void* context; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)materialAttachmentWithGLKTextureInfo:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(CGSize)size;
-(void*)context;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setContext:(void*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(unsigned)glID;
-(void)setGlID:(unsigned)arg1 ;
@end

