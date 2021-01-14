/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)nextObject;
-(id)initWithPSDLayerGroup:(id)arg1 ;
-(id)initWithPSDImage:(id)arg1 ;
-(id)allObjects;
-(void)dealloc;
@end

