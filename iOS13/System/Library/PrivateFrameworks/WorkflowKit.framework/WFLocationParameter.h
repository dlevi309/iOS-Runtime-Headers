/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@interface WFLocationParameter : WFParameter {

	BOOL _allowsTextOnlyLocations;
	BOOL _allowsCurrentLocation;
	BOOL _skipsProcessingCurrentLocation;
	BOOL _defaultToCurrentLocation;

}

@property (nonatomic,readonly) BOOL defaultToCurrentLocation;                    //@synthesize defaultToCurrentLocation=_defaultToCurrentLocation - In the implementation block
@property (nonatomic,readonly) BOOL allowsTextOnlyLocations;                     //@synthesize allowsTextOnlyLocations=_allowsTextOnlyLocations - In the implementation block
@property (nonatomic,readonly) BOOL allowsCurrentLocation;                       //@synthesize allowsCurrentLocation=_allowsCurrentLocation - In the implementation block
@property (nonatomic,readonly) BOOL skipsProcessingCurrentLocation;              //@synthesize skipsProcessingCurrentLocation=_skipsProcessingCurrentLocation - In the implementation block
@property (nonatomic,readonly) double currentLocationAccuracy; 
-(id)initWithDefinition:(id)arg1 ;
-(double)currentLocationAccuracy;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(BOOL)allowsTextOnlyLocations;
-(BOOL)skipsProcessingCurrentLocation;
-(BOOL)allowsCurrentLocation;
-(BOOL)defaultToCurrentLocation;
@end

