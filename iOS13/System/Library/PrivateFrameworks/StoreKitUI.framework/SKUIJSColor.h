/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)green;
-(unsigned long long)blue;
-(double)alpha;

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
-(id)description;
-(unsigned long long)red;
-(unsigned long long)green;
-(unsigned long long)blue;
-(double)alpha;
-(id)initWithAppContext:(id)arg1 color:(id)arg2 ;
@end

