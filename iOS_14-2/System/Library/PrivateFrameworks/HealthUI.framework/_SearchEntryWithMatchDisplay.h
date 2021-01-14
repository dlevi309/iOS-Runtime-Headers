/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UISearchBar.h>

@class NSString, UILabel;

@interface _SearchEntryWithMatchDisplay : UISearchBar {

	NSString* _matchDisplayString;
	UILabel* _matchDisplayLabel;

}

@property (readonly) UILabel * matchDisplayLabel;                        //@synthesize matchDisplayLabel=_matchDisplayLabel - In the implementation block
@property (nonatomic,retain) NSString * matchDisplayString;              //@synthesize matchDisplayString=_matchDisplayString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMatchDisplayString:(NSString *)arg1 ;
-(void)matchDisplayVisible:(BOOL)arg1 ;
-(id)_createMatchDisplayLabel;
-(NSString *)matchDisplayString;
-(UILabel *)matchDisplayLabel;
@end

