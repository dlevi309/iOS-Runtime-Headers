/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormPeripheralBase.h>

@class NSString;

@interface WKFormSelectControl : WKFormPeripheralBase {

	RetainPtr<NSObject<WKFormControl> >* _control;

}

@property (nonatomic,readonly) NSString * selectFormPopoverTitle; 
-(NSString *)selectFormPopoverTitle;
-(BOOL)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3 ;
@end

