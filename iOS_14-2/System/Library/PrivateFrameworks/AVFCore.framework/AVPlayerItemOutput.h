/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {

	AVPlayerItemOutputInternal* _outputInternal;

}

@property (assign,nonatomic) BOOL suppressesPlayerRendering; 
-(id)init;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(SCD_Struct_AV6)_itemTimeForHostTimeAsCMTime:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)itemTimeForHostTime:(double)arg1 ;
-(SCD_Struct_AV6)itemTimeForMachAbsoluteTime:(long long)arg1 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(id)_weakReference;
-(BOOL)suppressesPlayerRendering;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)dealloc;
@end

