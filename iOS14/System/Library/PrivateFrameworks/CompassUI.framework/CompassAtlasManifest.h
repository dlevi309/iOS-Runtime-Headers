/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassImageNode, NSMutableDictionary;

@interface CompassAtlasManifest : NSObject {

	CompassImageNode* _rootNode;
	NSMutableDictionary* _items;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(CGRect)addItem:(id)arg1 size:(CGSize)arg2 ;
-(CGRect)boundsForItem:(id)arg1 ;
@end

