/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class GKLabel, NSString;

@interface GKRemoteUIHeaderView : UIView <RUIHeader> {

	BOOL _isFirstSection;
	GKLabel* _textLabel;
	double _height;
	double _bottomMargin;

}

@property (assign,nonatomic) BOOL isFirstSection;                   //@synthesize isFirstSection=_isFirstSection - In the implementation block
@property (nonatomic,retain) GKLabel * textLabel;                   //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double height;                         //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double bottomMargin;                   //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeight:(double)arg1 ;
-(void)setIsFirstSection:(BOOL)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(double)height;
-(id)initWithAttributes:(id)arg1 ;
-(void)setTextLabel:(GKLabel *)arg1 ;
-(BOOL)isFirstSection;
-(double)bottomMargin;
-(GKLabel *)textLabel;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

