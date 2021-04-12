/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPaneHeaderView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@protocol RUIHeaderDelegate;
@class NSString;

@interface BFFPaneHeaderView_RemoteUI : BFFPaneHeaderView <RUIHeader> {

	id<RUIHeaderDelegate> _rui_headerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(id)headerLabel;
-(void)setIconImage:(id)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(void)setImageAlignment:(int)arg1 ;
@end

