/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


#import <AirPortAssistant/AirPortAssistant-Structs.h>
@interface ImageStore : NSObject
+(id)imageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ofType:(id)arg3 ;
+(id)imageForInformationalDiagram:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 audioImage:(BOOL)arg4 small:(BOOL)arg5 ;
+(id)imageNameForInformationalDiagram:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 audioImage:(BOOL)arg4 small:(BOOL)arg5 useDataCache:(BOOL*)arg6 ;
+(id)insetImageForInformationalDiagram:(unsigned)arg1 deviceKind:(int)arg2 audioImage:(BOOL)arg3 small:(BOOL)arg4 ;
+(id)imageNameForProductID:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 small:(BOOL)arg4 cropped:(BOOL)arg5 threeDee:(BOOL)arg6 ;
+(id)kitImageOfType:(long long)arg1 ;
+(id)sharedImageStore;
+(id)imageForInformationalDiagram:(unsigned)arg1 ;
+(double)informationDiagramBaseImageCenterOffset:(unsigned)arg1 small:(BOOL)arg2 ;
+(double)informationDiagramBaseImageRightEdgeInset:(unsigned)arg1 small:(BOOL)arg2 ;
+(id)imageForInformationalDiagramNamed:(id)arg1 small:(BOOL)arg2 ;
+(id)insetImageForInformationalDiagram:(unsigned)arg1 ;
+(id)imageForBaseStationWithProductID:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 small:(BOOL)arg4 cropped:(BOOL)arg5 threeDee:(BOOL)arg6 ;
+(CGImageRef)cgImageFromImage:(id)arg1 forContentsScale:(double)arg2 ;
@end

