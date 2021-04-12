/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <UIKitCore/UIImage.h>

@class NSData;

@interface BSUIMappedSurfaceImage : UIImage {

	NSData* _mappedSurfaceData;

}

@property (setter=_setMappedSurfaceData:,getter=_mappedSurfaceData,nonatomic,retain) NSData * _mappedSurfaceData;              //@synthesize mappedSurfaceData=_mappedSurfaceData - In the implementation block
+(id)mappedSurfaceImageFromPath:(id)arg1 loadEagerly:(BOOL)arg2 ;
+(BOOL)writeSurfaceImage:(id)arg1 toFileDescriptor:(int)arg2 ;
-(void)_setMappedSurfaceData:(id)arg1 ;
-(NSData *)_mappedSurfaceData;
@end

