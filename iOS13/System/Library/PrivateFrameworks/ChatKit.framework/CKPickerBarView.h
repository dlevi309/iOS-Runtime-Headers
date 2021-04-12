/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class NSArray;


@protocol CKPickerBarView <NSObject>
@property (nonatomic,copy) NSArray * acknowledgmentViews; 
@required
-(id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(char)arg3;
-(NSArray *)acknowledgmentViews;
-(void)performShowAnimation:(/*^block*/id)arg1;
-(void)performSendAnimation:(/*^block*/id)arg1;
-(void)performCancelAnimation:(/*^block*/id)arg1;
-(void)performSelectedAnimation:(/*^block*/id)arg1;
-(void)setAcknowledgmentViews:(id)arg1;

@end

