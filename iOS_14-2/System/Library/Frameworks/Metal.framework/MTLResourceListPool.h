/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@interface MTLResourceListPool : NSObject {

	MTLResourceListPoolPrivate* _priv;
	int _resourceListCapacity;

}
-(id)initWithResourceListCapacity:(int)arg1 ;
-(int)availableCount;
-(void)purge;
-(void)dealloc;
@end

