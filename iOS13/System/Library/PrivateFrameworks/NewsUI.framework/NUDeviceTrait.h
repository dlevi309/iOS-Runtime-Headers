/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUDeviceTrait.h>

@protocol NUDeviceTrait <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long deviceTraitSize; 
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@required
-(BOOL)isLandscape;
-(unsigned long long)deviceTraitSize;

@end


@class NSString;

@interface NUDeviceTrait : NSObject <NUDeviceTrait> {

	unsigned long long _deviceTraitSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long deviceTraitSize;              //@synthesize deviceTraitSize=_deviceTraitSize - In the implementation block
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isLandscape;
-(unsigned long long)deviceTraitSize;
-(id)initWithDeviceTraitSize:(unsigned long long)arg1 ;
@end

