/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptDetailsResizableCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UISwitch, NSString;

@interface CKDetailsChatOptionsCheckboxCell : CKTranscriptDetailsResizableCell <CKDetailsCell> {

	UISwitch* _controlSwitch;

}

@property (nonatomic,retain) UISwitch * controlSwitch;              //@synthesize controlSwitch=_controlSwitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(UISwitch *)controlSwitch;
-(void)layoutSubviews;
-(void)setControlSwitch:(UISwitch *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

