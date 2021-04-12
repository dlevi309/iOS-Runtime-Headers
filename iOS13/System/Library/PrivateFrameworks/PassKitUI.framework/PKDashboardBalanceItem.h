/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class NSString;

@interface PKDashboardBalanceItem : NSObject <PKDashboardItem> {

	BOOL _topUpEnabled;
	NSString* _balance;
	NSString* _title;
	NSString* _availableCredit;
	NSString* _topUpTitle;
	/*^block*/id _topUpAction;

}

@property (nonatomic,retain) NSString * balance;                      //@synthesize balance=_balance - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * availableCredit;              //@synthesize availableCredit=_availableCredit - In the implementation block
@property (nonatomic,retain) NSString * topUpTitle;                   //@synthesize topUpTitle=_topUpTitle - In the implementation block
@property (nonatomic,copy) id topUpAction;                            //@synthesize topUpAction=_topUpAction - In the implementation block
@property (assign,nonatomic) BOOL topUpEnabled;                       //@synthesize topUpEnabled=_topUpEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)balance;
-(void)setBalance:(NSString *)arg1 ;
-(NSString *)availableCredit;
-(void)setAvailableCredit:(NSString *)arg1 ;
-(NSString *)topUpTitle;
-(void)setTopUpTitle:(NSString *)arg1 ;
-(id)topUpAction;
-(void)setTopUpAction:(id)arg1 ;
-(BOOL)topUpEnabled;
-(void)setTopUpEnabled:(BOOL)arg1 ;
@end

