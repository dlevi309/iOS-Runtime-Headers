/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

