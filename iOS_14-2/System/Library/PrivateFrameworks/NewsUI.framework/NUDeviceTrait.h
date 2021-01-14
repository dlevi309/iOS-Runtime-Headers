/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) unsigned long long deviceTraitSize;              //@synthesize deviceTraitSize=_deviceTraitSize - In the implementation block
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLandscape;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)deviceTraitSize;
-(id)initWithDeviceTraitSize:(unsigned long long)arg1 ;
@end

