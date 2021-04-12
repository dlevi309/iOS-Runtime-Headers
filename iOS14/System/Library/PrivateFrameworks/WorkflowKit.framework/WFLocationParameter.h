/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSString;

@interface WFLocationParameter : WFParameter <WFModuleSummarySupporting> {

	BOOL _allowsTextOnlyLocations;
	BOOL _allowsCurrentLocation;
	BOOL _skipsProcessingCurrentLocation;
	BOOL _defaultToCurrentLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL defaultToCurrentLocation;                    //@synthesize defaultToCurrentLocation=_defaultToCurrentLocation - In the implementation block
@property (nonatomic,readonly) BOOL allowsTextOnlyLocations;                     //@synthesize allowsTextOnlyLocations=_allowsTextOnlyLocations - In the implementation block
@property (nonatomic,readonly) BOOL allowsCurrentLocation;                       //@synthesize allowsCurrentLocation=_allowsCurrentLocation - In the implementation block
@property (nonatomic,readonly) BOOL skipsProcessingCurrentLocation;              //@synthesize skipsProcessingCurrentLocation=_skipsProcessingCurrentLocation - In the implementation block
@property (nonatomic,readonly) double currentLocationAccuracy; 
-(id)moduleSummarySlotForState:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(double)currentLocationAccuracy;
-(BOOL)allowsTextOnlyLocations;
-(BOOL)allowsCurrentLocation;
-(BOOL)skipsProcessingCurrentLocation;
-(BOOL)defaultToCurrentLocation;
@end

