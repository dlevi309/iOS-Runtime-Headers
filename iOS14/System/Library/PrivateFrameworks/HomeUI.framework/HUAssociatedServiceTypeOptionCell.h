/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class NSString;

@interface HUAssociatedServiceTypeOptionCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _checked;
	BOOL _suggestion;

}

@property (assign,getter=isChecked,nonatomic) BOOL checked;                    //@synthesize checked=_checked - In the implementation block
@property (assign,getter=isSuggestion,nonatomic) BOOL suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(BOOL)isSuggestion;
-(void)setSuggestion:(BOOL)arg1 ;
-(id)colorForCurrentState;
@end

