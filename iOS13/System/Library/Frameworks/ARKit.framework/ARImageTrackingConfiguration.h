/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

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
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(id)supportedVideoFormats;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)maximumNumberOfTrackedImages;
-(NSSet *)trackingImages;
-(void)createTechniques:(id)arg1 ;
-(void)setMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)setTrackingImages:(NSSet *)arg1 ;
@end

