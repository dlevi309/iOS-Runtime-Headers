/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)wasSelected;
-(void)setDateSelected:(NSDate *)arg1 ;
-(NSDate *)dateSelected;
-(void)updateForState:(long long)arg1 touchInside:(BOOL)arg2 ;
-(void)setWasSelected:(BOOL)arg1 ;
@end

