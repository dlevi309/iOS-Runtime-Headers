/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/_UIActivityItemCustomization.h>
#import <libobjc.A.dylib/_UIActivityItemCustomizationSwitch.h>

@protocol _UIActivityItemCustomizationSwitch <NSObject>
@property (nonatomic,readonly) BOOL value; 
@required
-(BOOL)value;

@end


@class NSString;

@interface _UIActivityItemCustomizationSwitch : _UIActivityItemCustomization <_UIActivityItemCustomizationSwitch> {

	BOOL _value;
	/*^block*/id __handler;

}

@property (setter=_setHandler:,nonatomic,copy) id _handler;              //@synthesize _handler=__handler - In the implementation block
@property (nonatomic,readonly) BOOL value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setHandler:(/*^block*/id)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 value:(BOOL)arg3 footerText:(id)arg4 ;
-(id)_handler;
-(void)_setValue:(BOOL)arg1 ;
-(BOOL)value;
@end

