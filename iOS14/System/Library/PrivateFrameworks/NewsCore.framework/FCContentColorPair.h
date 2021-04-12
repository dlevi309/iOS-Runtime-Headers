/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCColor;

@interface FCContentColorPair : NSObject {

	FCColor* _lightColor;
	FCColor* _darkColor;

}

@property (nonatomic,copy,readonly) FCColor * lightColor;              //@synthesize lightColor=_lightColor - In the implementation block
@property (nonatomic,copy,readonly) FCColor * darkColor;               //@synthesize darkColor=_darkColor - In the implementation block
-(FCColor *)lightColor;
-(id)initWithLightColor:(id)arg1 darkColor:(id)arg2 ;
-(FCColor *)darkColor;
@end

