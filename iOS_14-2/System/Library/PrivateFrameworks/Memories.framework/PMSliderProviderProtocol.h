/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMSliderProviderProtocol <PMEditProviderProtocol>
@property (assign,nonatomic) unsigned long long selectedIndex; 
@required
-(unsigned long long)numberOfItems;
-(void)setSelectedIndex:(unsigned long long)arg1;
-(unsigned long long)selectedIndex;
-(id)displayNameForIndex:(unsigned long long)arg1;
-(void)willBeginScrolling;
-(void)updateLocalizedNames;

@end

