/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration {

	NSSet* _trackingImages;
	long long _maximumNumberOfTrackedImages;

}

@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (nonatomic,copy) NSSet * trackingImages;                                         //@synthesize trackingImages=_trackingImages - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfTrackedImages;                       //@synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(id)supportedVideoFormats;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)maximumNumberOfTrackedImages;
-(NSSet *)trackingImages;
-(void)createTechniques:(id)arg1 ;
-(void)setMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)setTrackingImages:(NSSet *)arg1 ;
@end

