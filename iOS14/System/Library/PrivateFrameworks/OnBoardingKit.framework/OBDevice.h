/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@interface OBDevice : NSObject {

	BOOL _hasHomeButton;
	unsigned long long _type;
	unsigned long long _templateType;

}

@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long templateType;              //@synthesize templateType=_templateType - In the implementation block
@property (assign,nonatomic) BOOL hasHomeButton;                           //@synthesize hasHomeButton=_hasHomeButton - In the implementation block
+(id)currentDevice;
-(void)setHasHomeButton:(BOOL)arg1 ;
-(unsigned long long)templateTypeForBoundsWidth:(double)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)templateType;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(BOOL)hasHomeButton;
-(unsigned long long)type;
@end

