/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {

	CIBurstImageSetInternal* _priv;

}
+(id)defaultVersionString;
+(id)burstImageSet;
+(id)burstImageSetWithOptions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(id)burstId;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(double)secondsSinceStart;
-(id)bestImageIdentifiers;
-(id)allImageIdentifiers;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(BOOL)isAction;
-(BOOL)isPortrait;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(id)coverImageIdentifier;
-(unsigned long long)imageClusterCount;
-(id)imageClusterForIndex:(unsigned long long)arg1 ;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
@end

