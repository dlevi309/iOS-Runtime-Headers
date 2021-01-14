/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSMutableDictionary, NSMutableArray;

@interface _NSMarkupTreeNode : NSObject {

	NSMutableDictionary* _attributes;
	NSMutableArray* _children;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * children;                     //@synthesize children=_children - In the implementation block
-(NSMutableArray *)children;
-(void)addChild:(id)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)addAttributes:(id)arg1 ;
-(void)dealloc;
@end

