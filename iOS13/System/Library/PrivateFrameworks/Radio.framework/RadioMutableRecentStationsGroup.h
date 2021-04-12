/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioRecentStationsGroup.h>

@class NSString, NSArray;

@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (nonatomic,copy) NSArray * stations; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setStations:(NSArray *)arg1 ;
@end

