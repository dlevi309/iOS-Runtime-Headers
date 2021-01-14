/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUCCMosaicOrderable
@property (nonatomic,readonly) unsigned long long itemType; 
@property (assign,nonatomic) unsigned long long itemSize; 
@property (assign,nonatomic) double itemPriority; 
@required
-(unsigned long long)itemSize;
-(unsigned long long)itemType;
-(double)itemPriority;
-(void)setItemPriority:(double)arg1;
-(void)setItemSize:(unsigned long long)arg1;

@end

