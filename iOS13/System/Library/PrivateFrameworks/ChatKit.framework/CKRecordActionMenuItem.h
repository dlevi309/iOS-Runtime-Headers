/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKActionMenuItem.h>

@class NSDate;

@interface CKRecordActionMenuItem : CKActionMenuItem {

	BOOL _wasSelected;
	NSDate* _dateSelected;

}

@property (assign,nonatomic) BOOL wasSelected;                   //@synthesize wasSelected=_wasSelected - In the implementation block
@property (nonatomic,retain) NSDate * dateSelected;              //@synthesize dateSelected=_dateSelected - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setWasSelected:(BOOL)arg1 ;
-(void)setDateSelected:(NSDate *)arg1 ;
-(BOOL)wasSelected;
-(NSDate *)dateSelected;
-(void)updateForState:(long long)arg1 touchInside:(BOOL)arg2 ;
@end

