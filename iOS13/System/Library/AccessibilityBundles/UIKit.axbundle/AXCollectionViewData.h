/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/


@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject {

	NSMutableDictionary* _children;
	long long _childCount;

}

@property (assign,nonatomic) long long childCount;                          //@synthesize childCount=_childCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * children;              //@synthesize children=_children - In the implementation block
-(id)init;
-(id)description;
-(NSMutableDictionary *)children;
-(long long)childCount;
-(void)setChildCount:(long long)arg1 ;
@end

