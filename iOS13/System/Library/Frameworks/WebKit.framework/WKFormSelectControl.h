/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormPeripheralBase.h>

@class NSString;

@interface WKFormSelectControl : WKFormPeripheralBase {

	RetainPtr<NSObject<WKFormControl> >* _control;

}

@property (nonatomic,readonly) NSString * selectFormPopoverTitle; 
-(id)initWithView:(id)arg1 ;
-(NSString *)selectFormPopoverTitle;
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3 ;
@end

