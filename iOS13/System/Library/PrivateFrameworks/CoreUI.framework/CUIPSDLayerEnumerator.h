/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreFoundation/NSEnumerator.h>

@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator {

	CUIPSDLayerGroupRef* _layerGroup;
	unsigned _currentIndex;
	BOOL _isImageFile;

}
+(id)enumeratorWithPSDLayerGroup:(id)arg1 ;
+(id)enumeratorWithPSDImage:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)allObjects;
-(id)initWithPSDLayerGroup:(id)arg1 ;
-(id)initWithPSDImage:(id)arg1 ;
@end

