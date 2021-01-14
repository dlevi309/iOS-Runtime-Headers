/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)glID;
-(CGSize)size;
-(NSDictionary *)options;
-(void)setSize:(CGSize)arg1 ;
-(void*)context;
-(void)setOptions:(NSDictionary *)arg1 ;
-(unsigned)target;
-(void)dealloc;
-(void)setContext:(void*)arg1 ;
-(void)setGlID:(unsigned)arg1 ;
@end

