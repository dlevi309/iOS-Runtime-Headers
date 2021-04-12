/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMSliderProviderProtocol <PMEditProviderProtocol>
@property (assign,nonatomic) unsigned long long selectedIndex; 
@required
-(unsigned long long)numberOfItems;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1;
-(id)displayNameForIndex:(unsigned long long)arg1;
-(void)willBeginScrolling;
-(void)updateLocalizedNames;

@end

