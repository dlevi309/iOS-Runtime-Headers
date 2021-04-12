/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)timestamp;
-(id<CLSInvestigationItem>)item;
-(void)setItem:(id<CLSInvestigationItem>)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(id)identifier;
-(void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2 ;
@end

