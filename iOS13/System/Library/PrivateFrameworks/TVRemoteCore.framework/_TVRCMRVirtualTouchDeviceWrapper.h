/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (assign,getter=isAbsolute,nonatomic) BOOL absolute; 
@property (assign,getter=isDisplayIntegrated,nonatomic) BOOL displayIntegrated; 
@property (assign,nonatomic) CGSize screenSize; 
-(id)init;
-(void)dealloc;
-(BOOL)isAbsolute;
-(void)setScreenSize:(CGSize)arg1 ;
-(CGSize)screenSize;
-(BOOL)isDisplayIntegrated;
-(void)setAbsolute:(BOOL)arg1 ;
-(void*)deviceDescriptor;
-(void)setDisplayIntegrated:(BOOL)arg1 ;
@end

