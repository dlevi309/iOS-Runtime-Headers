/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSCurationDebugObject.h>

@protocol CLSInvestigationItem;
@interface CLSCurationDebugItem : CLSCurationDebugObject {

	unsigned long long _dedupingType;
	CLSCurationDebugItem* _dedupedDebugItem;
	id<CLSInvestigationItem> _item;

}

@property (nonatomic,retain) id<CLSInvestigationItem> item;              //@synthesize item=_item - In the implementation block
+(id)stringForDedupingType:(unsigned long long)arg1 ;
-(id)identifier;
-(id<CLSInvestigationItem>)item;
-(void)setItem:(id<CLSInvestigationItem>)arg1 ;
-(id)dictionaryRepresentation;
-(id)timestamp;
-(id)initWithItem:(id)arg1 ;
-(void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2 ;
@end

