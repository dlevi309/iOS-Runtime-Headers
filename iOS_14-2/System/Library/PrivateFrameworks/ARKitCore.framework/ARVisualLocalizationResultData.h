/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARResultData.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class ARLocationData, VLLocalizationResult, VLLocalizationDebugInfo, CLLocation, NSString;

@interface ARVisualLocalizationResultData : NSObject <ARResultData, ARDaemonSecureCoding> {

	ARLocationData* _inputLocation;
	VLLocalizationResult* _localizationResult;
	long long _errorCode;
	VLLocalizationDebugInfo* _debugInfo;
	CLLocation* _location;
	double _heading;

}

@property (getter=isSecure,nonatomic,readonly) BOOL secure; 
@property (nonatomic,readonly) VLLocalizationResult * localizationResult;              //@synthesize localizationResult=_localizationResult - In the implementation block
@property (assign,nonatomic) long long errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) VLLocalizationDebugInfo * debugInfo;                    //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double heading;                                         //@synthesize heading=_heading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isSecure;
-(double)heading;
-(double)timestamp;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)errorCode;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(VLLocalizationDebugInfo *)debugInfo;
-(VLLocalizationResult *)localizationResult;
-(id)initWithVLLocalizationResult:(id)arg1 errorCode:(long long)arg2 debugInfo:(id)arg3 heading:(double)arg4 inputLocation:(id)arg5 ;
@end

