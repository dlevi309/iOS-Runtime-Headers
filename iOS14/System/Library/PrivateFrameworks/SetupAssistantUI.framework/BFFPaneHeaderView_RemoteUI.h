/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithAttributes:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)headerLabel;
-(void)setIconImage:(id)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
@end

