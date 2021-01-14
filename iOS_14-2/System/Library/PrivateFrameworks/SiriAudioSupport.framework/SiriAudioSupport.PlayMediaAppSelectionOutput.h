/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SiriAudioSupport.PlayMediaAppSelectionOutput : _UKNOWN_SUPERCLASS_ <MLFeatureProvider> {

	 provider;
	 $__lazy_storage_$_result_isRequestedApp;
	 $__lazy_storage_$_result_isRequestedAppProbability;

}

@property (readonly,nonatomic) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
@end

