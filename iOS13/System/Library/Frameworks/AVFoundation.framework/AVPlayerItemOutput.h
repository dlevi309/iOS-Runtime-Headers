/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {

	AVPlayerItemOutputInternal* _outputInternal;

}

@property (assign,nonatomic) BOOL suppressesPlayerRendering; 
-(id)init;
-(void)dealloc;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(id)_weakReference;
-(BOOL)suppressesPlayerRendering;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(SCD_Struct_AV7)_itemTimeForHostTimeAsCMTime:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)itemTimeForHostTime:(double)arg1 ;
-(SCD_Struct_AV7)itemTimeForMachAbsoluteTime:(long long)arg1 ;
@end

