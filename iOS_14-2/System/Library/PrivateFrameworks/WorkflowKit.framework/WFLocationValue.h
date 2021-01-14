/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)displayString;
-(id)initWithPlacemark:(id)arg1 ;
-(id)initWithLocationName:(id)arg1 ;
-(BOOL)isCurrentLocation;
-(CLPlacemark *)placemark;
-(NSString *)locationName;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithLocationName:(id)arg1 placemark:(id)arg2 ;
-(id)initWithCurrentLocation;
-(NSString *)defaultSearchText;
-(id)initWithLegacyVariableString:(id)arg1 ;
-(WFVariableString *)legacyVariableString;
@end

