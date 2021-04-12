/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFVariableSerialization.h>

@class NSString, CLPlacemark, WFVariableString;

@interface WFLocationValue : NSObject <WFVariableSerialization> {

	BOOL _currentLocation;
	NSString* _locationName;
	CLPlacemark* _placemark;
	WFVariableString* _legacyVariableString;

}

@property (nonatomic,readonly) WFVariableString * legacyVariableString;                    //@synthesize legacyVariableString=_legacyVariableString - In the implementation block
@property (nonatomic,readonly) NSString * locationName;                                    //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                                    //@synthesize placemark=_placemark - In the implementation block
@property (getter=isCurrentLocation,nonatomic,readonly) BOOL currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * defaultSearchText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serializedRepresentation;
-(NSString *)locationName;
-(id)initWithPlacemark:(id)arg1 ;
-(CLPlacemark *)placemark;
-(NSString *)displayString;
-(BOOL)isCurrentLocation;
-(id)initWithLocationName:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(WFVariableString *)legacyVariableString;
-(id)initWithLegacyVariableString:(id)arg1 ;
-(id)initWithCurrentLocation;
-(id)initWithLocationName:(id)arg1 placemark:(id)arg2 ;
-(NSString *)defaultSearchText;
@end

