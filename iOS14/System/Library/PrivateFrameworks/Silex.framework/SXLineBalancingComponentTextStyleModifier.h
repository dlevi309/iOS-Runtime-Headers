/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModifying.h>

@class SXLineBalancingSettings, NSString;

@interface SXLineBalancingComponentTextStyleModifier : NSObject <SXDOMModifying> {

	SXLineBalancingSettings* _settings;

}

@property (nonatomic,readonly) SXLineBalancingSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSettings:(id)arg1 ;
-(void)enableLineBalancingForComponentTextStyleWithIdentifier:(id)arg1 DOM:(id)arg2 context:(id)arg3 ;
-(SXLineBalancingSettings *)settings;
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
@end

