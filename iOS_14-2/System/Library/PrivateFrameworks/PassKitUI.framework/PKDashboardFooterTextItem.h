/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItem.h>

@class NSString, UIColor;

@interface PKDashboardFooterTextItem : NSObject <PKDashboardItem> {

	NSString* _footerText;
	UIColor* _linkTextColor;
	/*^block*/id _action;
	NSRange _linkRange;

}

@property (nonatomic,copy) NSString * footerText;                   //@synthesize footerText=_footerText - In the implementation block
@property (assign,nonatomic) NSRange linkRange;                     //@synthesize linkRange=_linkRange - In the implementation block
@property (nonatomic,retain) UIColor * linkTextColor;               //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (nonatomic,copy) id action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itemWithFooterText:(id)arg1 ;
-(void)setFooterText:(NSString *)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(UIColor *)linkTextColor;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(NSRange)linkRange;
-(NSString *)footerText;
-(void)setLinkRange:(NSRange)arg1 ;
@end

