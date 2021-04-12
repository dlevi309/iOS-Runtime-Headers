/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ARWorldTrackingState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _majorRelocalization;
	BOOL _minorRelocalization;
	BOOL _poseGraphUpdated;
	long long _state;
	long long _reason;
	long long _vioTrackingState;
	double _lastMajorRelocalizationTimestamp;
	double _originTimestamp;
	double _poseTimestamp;
	unsigned long long _currentVIOMapSize;
	unsigned long long _numberOfCameraSwitches;
	unsigned long long _reinitializationAttempts;
	NSArray* _mergedSessionIdentifiers;
	NSArray* _collaborationStats;
	SCD_Struct_AR1 _majorRelocalizationCameraTransform;

}

@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long reason;                                               //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL majorRelocalization;                                       //@synthesize majorRelocalization=_majorRelocalization - In the implementation block
@property (assign,nonatomic) BOOL minorRelocalization;                                       //@synthesize minorRelocalization=_minorRelocalization - In the implementation block
@property (assign,nonatomic) BOOL poseGraphUpdated;                                          //@synthesize poseGraphUpdated=_poseGraphUpdated - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 majorRelocalizationCameraTransform;              //@synthesize majorRelocalizationCameraTransform=_majorRelocalizationCameraTransform - In the implementation block
@property (assign,nonatomic) long long vioTrackingState;                                     //@synthesize vioTrackingState=_vioTrackingState - In the implementation block
@property (assign,nonatomic) double lastMajorRelocalizationTimestamp;                        //@synthesize lastMajorRelocalizationTimestamp=_lastMajorRelocalizationTimestamp - In the implementation block
@property (assign,nonatomic) double originTimestamp;                                         //@synthesize originTimestamp=_originTimestamp - In the implementation block
@property (assign,nonatomic) double poseTimestamp;                                           //@synthesize poseTimestamp=_poseTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long currentVIOMapSize;                           //@synthesize currentVIOMapSize=_currentVIOMapSize - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCameraSwitches;                      //@synthesize numberOfCameraSwitches=_numberOfCameraSwitches - In the implementation block
@property (assign,nonatomic) unsigned long long reinitializationAttempts;                    //@synthesize reinitializationAttempts=_reinitializationAttempts - In the implementation block
@property (nonatomic,retain) NSArray * mergedSessionIdentifiers;                             //@synthesize mergedSessionIdentifiers=_mergedSessionIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * collaborationStats;                                   //@synthesize collaborationStats=_collaborationStats - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reason;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setReason:(long long)arg1 ;
-(double)originTimestamp;
-(void)setOriginTimestamp:(double)arg1 ;
-(long long)vioTrackingState;
-(BOOL)poseGraphUpdated;
-(BOOL)majorRelocalization;
-(unsigned long long)currentVIOMapSize;
-(unsigned long long)numberOfCameraSwitches;
-(unsigned long long)reinitializationAttempts;
-(void)setMajorRelocalization:(BOOL)arg1 ;
-(BOOL)minorRelocalization;
-(void)setMinorRelocalization:(BOOL)arg1 ;
-(void)setPoseGraphUpdated:(BOOL)arg1 ;
-(void)setMajorRelocalizationCameraTransform:(SCD_Struct_AR1)arg1 ;
-(void)setVioTrackingState:(long long)arg1 ;
-(void)setLastMajorRelocalizationTimestamp:(double)arg1 ;
-(void)setPoseTimestamp:(double)arg1 ;
-(void)setCurrentVIOMapSize:(unsigned long long)arg1 ;
-(void)setNumberOfCameraSwitches:(unsigned long long)arg1 ;
-(void)setReinitializationAttempts:(unsigned long long)arg1 ;
-(void)setCollaborationStats:(NSArray *)arg1 ;
-(void)setMergedSessionIdentifiers:(NSArray *)arg1 ;
-(double)lastMajorRelocalizationTimestamp;
-(SCD_Struct_AR1)majorRelocalizationCameraTransform;
-(double)poseTimestamp;
-(NSArray *)mergedSessionIdentifiers;
-(NSArray *)collaborationStats;
@end

