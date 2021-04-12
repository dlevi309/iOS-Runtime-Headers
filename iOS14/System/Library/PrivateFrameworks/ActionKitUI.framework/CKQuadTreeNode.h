/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)bounds;
-(NSValue *)point;
-(id)init;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)isLeaf;
-(id)debugDescription;
-(void)visit:(/*^block*/id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setPoint:(NSValue *)arg1 ;
-(NSArray *)nodes;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)debugDescriptionWithLevel:(long long)arg1 ;
-(id)nodeForPoint:(CGPoint)arg1 ;
-(void)insertPoint:(CGPoint)arg1 ;
@end

