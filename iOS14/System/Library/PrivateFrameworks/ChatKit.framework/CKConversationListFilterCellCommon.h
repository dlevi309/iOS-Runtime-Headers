/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKConversationListFilterCellCommon <NSObject>
@property (assign,nonatomic,__weak) id<CKConversationListFilterDelegate> filterDelegate; 
@optional
-(void)updateFilterModeTitle:(id)arg1;

@required
+(id)identifier;
+(double)defaultHeight:(long long)arg1;
+(long long)defaultCellStyle;
-(id<CKConversationListFilterDelegate>)filterDelegate;
-(void)updateControl:(id)arg1 selectedIndex:(unsigned long long)arg2 isEnabeld:(BOOL)arg3;
-(void)setFilterDelegate:(id)arg1;

@end

