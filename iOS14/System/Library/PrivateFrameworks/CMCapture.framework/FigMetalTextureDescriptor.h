/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString, MTLTextureDescriptor;

@interface FigMetalTextureDescriptor : NSObject {

	BOOL _isLinear;
	NSString* _label;
	MTLTextureDescriptor* _desc;

}

@property (assign,nonatomic) BOOL isLinear;                            //@synthesize isLinear=_isLinear - In the implementation block
@property (nonatomic,retain) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) MTLTextureDescriptor * desc;              //@synthesize desc=_desc - In the implementation block
-(void)setDesc:(MTLTextureDescriptor *)arg1 ;
-(MTLTextureDescriptor *)desc;
-(id)init;
-(void)setIsLinear:(BOOL)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isLinear;
-(NSString *)label;
@end

