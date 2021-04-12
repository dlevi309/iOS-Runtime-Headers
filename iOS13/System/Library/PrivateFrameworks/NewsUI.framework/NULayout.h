/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NULayout.h>

@protocol NULayout <NSObject>
@property (nonatomic,readonly) CGPoint originOffset; 
@required
-(CGPoint)originOffset;
-(void)layoutComponentsInBounds:(CGRect)arg1 originOffset:(CGPoint)arg2 layoutContext:(id)arg3;

@end

#import <libobjc.A.dylib/NUComponent.h>

@protocol NUSizer, NUNode;
@class NUComponents, NULayoutResolver, NSString;

@interface NULayout : NSObject <NULayout, NUComponent> {

	id<NUSizer> _sizer;
	id<NUNode> _node;
	NUComponents* _components;
	NULayoutResolver* _resolver;
	NULayoutOptions _options;

}

@property (nonatomic,readonly) NUComponents * components;                //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NULayoutResolver * resolver;              //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,readonly) id<NUNode> node;                          //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) NULayoutOptions options;                  //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPoint originOffset; 
@property (nonatomic,readonly) id<NUSizer> sizer;                        //@synthesize sizer=_sizer - In the implementation block
-(NSString *)description;
-(NULayoutOptions)options;
-(NUComponents *)components;
-(id<NUNode>)node;
-(NULayoutResolver *)resolver;
-(id<NUSizer>)sizer;
-(id)initWithNode:(id)arg1 sizer:(id)arg2 options:(NULayoutOptions)arg3 componentsBlock:(/*^block*/id)arg4 ;
-(CGPoint)originOffset;
-(void)layoutComponentsInBounds:(CGRect)arg1 originOffset:(CGPoint)arg2 layoutContext:(id)arg3 ;
-(void)buildComponents:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

