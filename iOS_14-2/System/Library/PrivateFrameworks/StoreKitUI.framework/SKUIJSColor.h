/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSColor.h>

@protocol SKUIJSColor <JSExport>
@property (nonatomic,readonly) unsigned long long red; 
@property (nonatomic,readonly) unsigned long long green; 
@property (nonatomic,readonly) unsigned long long blue; 
@property (nonatomic,readonly) double alpha; 
@required
-(unsigned long long)red;
-(double)alpha;
-(unsigned long long)blue;
-(unsigned long long)green;

@end


@interface SKUIJSColor : IKJSObject <SKUIJSColor> {

	unsigned long long _red;
	unsigned long long _green;
	unsigned long long _blue;
	double _alpha;

}

@property (nonatomic,readonly) unsigned long long red;                //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) unsigned long long green;              //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) unsigned long long blue;               //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                          //@synthesize alpha=_alpha - In the implementation block
-(unsigned long long)red;
-(double)alpha;
-(id)description;
-(unsigned long long)blue;
-(unsigned long long)green;
-(id)initWithAppContext:(id)arg1 color:(id)arg2 ;
@end

