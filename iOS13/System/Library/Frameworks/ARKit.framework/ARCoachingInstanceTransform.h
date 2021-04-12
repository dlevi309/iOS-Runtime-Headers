/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARCoachingInstanceTransform : NSObject {

	SCD_Struct_AR1 _baseTransform;
	SCD_Struct_AR1 _transform;
	 _localScale;
	 _localTranslation;
	 _recordedScale;
	 _recordedTranslation;

}

@property (nonatomic,readonly) SCD_Struct_AR1 transform; 
@property (assign,nonatomic)  localScale; 
@property (assign,nonatomic)  recordedScale;                          //@synthesize recordedScale=_recordedScale - In the implementation block
@property (assign,nonatomic)  localTranslation; 
@property (assign,nonatomic)  recordedTranslation;                    //@synthesize recordedTranslation=_recordedTranslation - In the implementation block
-(SCD_Struct_AR1)transform;
-(id)init:(SCD_Struct_AR1)arg1 ;
-(void)doTransform;
-(void)setRecordedScale:;
-(void)setRecordedTranslation:;
-()localScale;
-()localTranslation;
-(void)setLocalScale:;
-(void)setLocalTranslation:;
-()recordedScale;
-()recordedTranslation;
@end

