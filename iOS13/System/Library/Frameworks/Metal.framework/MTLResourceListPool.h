/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@interface MTLResourceListPool : NSObject {

	MTLResourceListPoolPrivate* _priv;
	int _resourceListCapacity;

}
-(void)dealloc;
-(void)purge;
-(int)availableCount;
-(id)initWithResourceListCapacity:(int)arg1 ;
@end

