/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectDiffable.h>

@class CAFilter, NSString, NSDictionary;

@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable> {

	CAFilter* _filter;
	NSString* _filterType;
	NSDictionary* _configurationValues;
	NSDictionary* _requestedValues;
	NSDictionary* _identityValues;
	double _requestedScaleHint;
	double _identityScaleHint;
	NSString* _filterName;

}

@property (nonatomic,copy) NSString * filterType;                           //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationValues;              //@synthesize configurationValues=_configurationValues - In the implementation block
@property (nonatomic,copy) NSDictionary * requestedValues;                  //@synthesize requestedValues=_requestedValues - In the implementation block
@property (nonatomic,copy) NSDictionary * identityValues;                   //@synthesize identityValues=_identityValues - In the implementation block
@property (assign,nonatomic) double requestedScaleHint;                     //@synthesize requestedScaleHint=_requestedScaleHint - In the implementation block
@property (assign,nonatomic) double identityScaleHint;                      //@synthesize identityScaleHint=_identityScaleHint - In the implementation block
@property (nonatomic,readonly) CAFilter * filter; 
@property (nonatomic,copy,readonly) NSString * filterName;                  //@synthesize filterName=_filterName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(CAFilter *)filter;
-(NSDictionary *)requestedValues;
-(void)convertToIdentity;
-(id)valueAsRequested:(BOOL)arg1 ;
-(NSString *)filterName;
-(NSDictionary *)identityValues;
-(void)forceUniqueName;
-(double)requestedScaleHint;
-(NSDictionary *)configurationValues;
-(void)setRequestedScaleHint:(double)arg1 ;
-(NSString *)description;
-(id)copyForTransitionOut;
-(double)scaleHintAsRequested:(BOOL)arg1 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(void)setIdentityScaleHint:(double)arg1 ;
-(void)setIdentityValues:(NSDictionary *)arg1 ;
-(void)setRequestedValues:(NSDictionary *)arg1 ;
-(id)initWithFilterType:(id)arg1 configurationValues:(id)arg2 requestedValues:(id)arg3 identityValues:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfigurationValues:(NSDictionary *)arg1 ;
-(double)identityScaleHint;
@end

