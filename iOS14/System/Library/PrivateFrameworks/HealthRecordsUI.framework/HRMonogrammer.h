/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class CNMonogrammer;

@interface HRMonogrammer : NSObject {

	CNMonogrammer* _monogrammer;

}

@property (nonatomic,retain) CNMonogrammer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
-(id)initWithDiameter:(double)arg1 ;
-(CNMonogrammer *)monogrammer;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(id)makeImageForTitle:(id)arg1 ;
@end
