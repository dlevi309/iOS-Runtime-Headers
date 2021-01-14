/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLCGPathCache : NSObject {

	CFDictionaryRef _pathCache;

}
+(id)sharedPathCache;
-(id)init;
-(void)dealloc;
-(CGPathRef)pathForKey:(CGRect)arg1 ;
-(void)setPath:(CGPathRef)arg1 forKey:(CGRect)arg2 ;
@end

