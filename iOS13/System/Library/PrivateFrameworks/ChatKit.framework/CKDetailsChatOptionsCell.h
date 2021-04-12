/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UISwitch, NSString;

@interface CKDetailsChatOptionsCell : CKDetailsCell <CKDetailsCell> {

	UISwitch* _controlSwitch;

}

@property (nonatomic,retain) UISwitch * controlSwitch;              //@synthesize controlSwitch=_controlSwitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
+(id)reuseIdentifier;
+(double)estimatedHeight;
+(BOOL)shouldHighlight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)controlSwitch;
-(void)setControlSwitch:(UISwitch *)arg1 ;
@end

