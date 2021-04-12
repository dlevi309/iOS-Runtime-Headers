/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL value; 
-(id)_handler;
-(BOOL)value;
-(void)_setValue:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 value:(BOOL)arg3 footerText:(id)arg4 ;
-(void)_setHandler:(/*^block*/id)arg1 ;
@end

