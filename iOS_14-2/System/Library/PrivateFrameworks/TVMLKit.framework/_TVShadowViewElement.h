/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)children;
-(_TVShadowViewElement *)parent;
-(void)setParent:(_TVShadowViewElement *)arg1 ;
-(_TVShadowViewElementID *)elementID;
-(unsigned long long)hash;
-(void)setElementID:(_TVShadowViewElementID *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

