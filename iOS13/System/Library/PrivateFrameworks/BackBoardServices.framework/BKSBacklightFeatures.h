/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(void)setFixedBrightnessNitsWhileDisabled:(float)arg1 ;
-(void)setFixedBrightnessLevelWhileDisabled:(float)arg1 ;
-(BOOL)disableFeatures;
-(void)setDisableFeatures:(BOOL)arg1 ;
-(float)fixedBrightnessNitsWhileDisabled;
-(float)fixedBrightnessLevelWhileDisabled;
@end

