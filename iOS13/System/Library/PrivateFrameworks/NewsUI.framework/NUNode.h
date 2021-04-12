/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUNode.h>
@class NSArray;


@protocol NUNode <NSObject>
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect bounds; 
@property (nonatomic,__weak,readonly) id<NUNode> supernode; 
@property (nonatomic,readonly) NSArray * subnodes; 
@required
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1;
-(void)addSubnode:(id)arg1;
-(NSArray *)subnodes;
-(id<NUNode>)supernode;
-(void)removeFromSupernode;
-(void)resolveViewsInView:(id)arg1;

@end


@protocol NUNode;
@class NSArray, NSMutableArray, NSObject, NSString;

@interface NUNode : NSObject <NUNode> {

	NSMutableArray* _subnodes;
	NSObject*<NUNode> _supernode;
	CGRect _frame;
	CGRect _bounds;

}

@property (nonatomic,retain) NSMutableArray * subnodes;                       //@synthesize subnodes=_subnodes - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<NUNode> supernode;              //@synthesize supernode=_supernode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect frame;                                    //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                   //@synthesize bounds=_bounds - In the implementation block
-(id)init;
-(NSString *)description;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubnode:(id)arg1 ;
-(NSMutableArray *)subnodes;
-(void)setSubnodes:(NSMutableArray *)arg1 ;
-(NSObject*<NUNode>)supernode;
-(void)removeFromSupernode;
-(void)setSupernode:(NSObject*<NUNode>)arg1 ;
-(void)resolveViewsInView:(id)arg1 ;
@end

