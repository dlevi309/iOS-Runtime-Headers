/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVExternalDeviceIconInternal, NSData;

@interface AVExternalDeviceIcon : NSObject {

	AVExternalDeviceIconInternal* _externalDeviceIcon;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) NSData * imageData; 
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered; 
-(BOOL)isPrerendered;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)imageData;
-(CGSize)pixelSize;
-(void)dealloc;
@end

