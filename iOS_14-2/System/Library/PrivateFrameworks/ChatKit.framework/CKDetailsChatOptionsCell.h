/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)shouldHighlight;
+(double)estimatedHeight;
+(double)preferredHeight;
+(id)reuseIdentifier;
-(UISwitch *)controlSwitch;
-(void)setControlSwitch:(UISwitch *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

