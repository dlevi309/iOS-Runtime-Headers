/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUComponent.h>

@protocol NUComponent <NSObject>
@property (nonatomic,readonly) id<NUNode> node; 
@property (nonatomic,readonly) id<NUSizer> sizer; 
@required
-(id<NUNode>)node;
-(id<NUSizer>)sizer;

@end


@protocol NUNode, NUSizer;
@class NSString;

@interface NUComponent : NSObject <NUComponent> {

	id<NUNode> _node;
	id<NUSizer> _sizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NUNode> node;                     //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) id<NUSizer> sizer;                   //@synthesize sizer=_sizer - In the implementation block
+(id)componentWithSizer:(id)arg1 node:(id)arg2 ;
-(NSString *)description;
-(id<NUNode>)node;
-(id<NUSizer>)sizer;
-(id)initWithSizer:(id)arg1 node:(id)arg2 ;
@end

