/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDarkModeConfiguration.h>
@class NSDictionary;


@protocol SXDarkModeConfiguration <NSObject>
@property (readonly,nonatomic) BOOL autoDarkModeEnabled; 
@property (readonly,nonatomic) NSDictionary * colors; 
@property (readonly,nonatomic) unsigned long long inversionBehavior; 
@property (readonly,nonatomic) double saturationThreshold; 
@required
-(NSDictionary *)colors;
-(BOOL)isAutoDarkModeEnabled;
-(BOOL)isAutoDarkModeEnabled;
-(unsigned long long)inversionBehavior;
-(double)saturationThreshold;

@end


@class NSDictionary, NSString;

@interface SXDarkModeConfiguration : NSObject <SXDarkModeConfiguration> {

	BOOL _autoDarkModeEnabled;
	unsigned long long _inversionBehavior;
	double _saturationThreshold;
	NSDictionary* _colors;

}

@property (getter=isAutoDarkModeEnabled,nonatomic,readonly) BOOL autoDarkModeEnabled;              //@synthesize autoDarkModeEnabled=_autoDarkModeEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * colors;                                         //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) unsigned long long inversionBehavior;                               //@synthesize inversionBehavior=_inversionBehavior - In the implementation block
@property (nonatomic,readonly) double saturationThreshold;                                         //@synthesize saturationThreshold=_saturationThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)colors;
-(BOOL)isAutoDarkModeEnabled;
-(unsigned long long)inversionBehavior;
-(double)saturationThreshold;
-(id)initWithAutoDarkModeEnabled:(BOOL)arg1 inversionBehavior:(unsigned long long)arg2 saturationThreshold:(double)arg3 colors:(id)arg4 ;
@end

