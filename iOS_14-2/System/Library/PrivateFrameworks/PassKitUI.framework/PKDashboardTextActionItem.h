/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class NSString;

@interface PKDashboardTextActionItem : NSObject <PKDashboardItem> {

	long long _style;
	NSString* _title;
	NSString* _subtitle;
	/*^block*/id _action;

}

@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) id action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(NSString *)title;
@end

