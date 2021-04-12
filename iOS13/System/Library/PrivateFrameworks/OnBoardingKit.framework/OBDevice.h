/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)templateType;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(void)setHasHomeButton:(BOOL)arg1 ;
-(unsigned long long)templateTypeForBoundsWidth:(double)arg1 ;
-(BOOL)hasHomeButton;
@end

