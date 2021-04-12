/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFStatusItem.h>

@class HMSymptom;

@interface HFSymptomStatusItem : HFStatusItem {

	HMSymptom* _symptom;

}

@property (nonatomic,readonly) HMSymptom * symptom;              //@synthesize symptom=_symptom - In the implementation block
-(HMSymptom *)symptom;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end

