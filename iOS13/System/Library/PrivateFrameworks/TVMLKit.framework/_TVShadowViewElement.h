/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class _TVShadowViewElementID, NSArray;

@interface _TVShadowViewElement : NSObject {

	_TVShadowViewElementID* _elementID;
	NSArray* _children;
	_TVShadowViewElement* _parent;

}

@property (nonatomic,copy) _TVShadowViewElementID * elementID;                  //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,copy) NSArray * children;                                  //@synthesize children=_children - In the implementation block
@property (assign,nonatomic,__weak) _TVShadowViewElement * parent;              //@synthesize parent=_parent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(_TVShadowViewElement *)parent;
-(void)setParent:(_TVShadowViewElement *)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setElementID:(_TVShadowViewElementID *)arg1 ;
-(_TVShadowViewElementID *)elementID;
@end

