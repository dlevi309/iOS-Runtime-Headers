/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSString;

@interface BKSBacklightFeatures : NSObject <BSProtobufSerializable> {

	BOOL _disableFeatures;
	float _fixedBrightnessNitsWhileDisabled;
	float _fixedBrightnessLevelWhileDisabled;

}

@property (assign,nonatomic) BOOL disableFeatures;                                 //@synthesize disableFeatures=_disableFeatures - In the implementation block
@property (assign,nonatomic) float fixedBrightnessNitsWhileDisabled;               //@synthesize fixedBrightnessNitsWhileDisabled=_fixedBrightnessNitsWhileDisabled - In the implementation block
@property (assign,nonatomic) float fixedBrightnessLevelWhileDisabled;              //@synthesize fixedBrightnessLevelWhileDisabled=_fixedBrightnessLevelWhileDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
-(id)succinctDescription;
-(id)init;
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)disableFeatures;
-(void)setFixedBrightnessNitsWhileDisabled:(float)arg1 ;
-(void)setFixedBrightnessLevelWhileDisabled:(float)arg1 ;
-(void)setDisableFeatures:(BOOL)arg1 ;
-(float)fixedBrightnessNitsWhileDisabled;
-(float)fixedBrightnessLevelWhileDisabled;
@end

