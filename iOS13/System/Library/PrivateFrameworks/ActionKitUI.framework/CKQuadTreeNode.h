/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/


#import <ActionKitUI/ActionKitUI-Structs.h>
@class NSMutableDictionary, NSValue, NSArray;

@interface CKQuadTreeNode : NSObject {

	CKQuadTreeNode* _topRight;
	CKQuadTreeNode* _topLeft;
	CKQuadTreeNode* _bottomLeft;
	CKQuadTreeNode* _bottomRight;
	NSMutableDictionary* _userInfo;
	NSValue* _point;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                        //@synthesize bounds=_bounds - In the implementation block
@property (getter=isLeaf,nonatomic,readonly) BOOL leaf; 
@property (nonatomic,copy,readonly) NSArray * nodes; 
@property (nonatomic,retain) NSValue * point;                        //@synthesize point=_point - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(CGRect)bounds;
-(NSValue *)point;
-(void)setPoint:(NSValue *)arg1 ;
-(NSArray *)nodes;
-(BOOL)isLeaf;
-(id)initWithBounds:(CGRect)arg1 ;
-(id)debugDescriptionWithLevel:(long long)arg1 ;
-(id)nodeForPoint:(CGPoint)arg1 ;
-(void)insertPoint:(CGPoint)arg1 ;
-(void)visit:(/*^block*/id)arg1 ;
@end

