/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setScreenSize:(CGSize)arg1 ;
-(BOOL)isDisplayIntegrated;
-(CGSize)screenSize;
-(void)setAbsolute:(BOOL)arg1 ;
-(void*)deviceDescriptor;
-(BOOL)isAbsolute;
-(void)dealloc;
-(void)setDisplayIntegrated:(BOOL)arg1 ;
@end

