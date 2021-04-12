/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLCGPathCache : NSObject {

	CFDictionaryRef _pathCache;

}
+(id)sharedPathCache;
-(id)init;
-(void)dealloc;
-(void)setPath:(CGPathRef)arg1 forKey:(CGRect)arg2 ;
-(CGPathRef)pathForKey:(CGRect)arg1 ;
@end

