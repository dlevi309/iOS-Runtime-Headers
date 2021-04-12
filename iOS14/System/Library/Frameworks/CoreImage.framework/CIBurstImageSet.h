/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithOptions:(id)arg1 ;
-(BOOL)isPortrait;
-(id)init;
-(id)burstId;
-(BOOL)isAction;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(double)secondsSinceStart;
-(id)bestImageIdentifiers;
-(id)allImageIdentifiers;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(id)coverImageIdentifier;
-(unsigned long long)imageClusterCount;
-(id)imageClusterForIndex:(unsigned long long)arg1 ;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
-(void)dealloc;
@end

