/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioRecentStationsGroup.h>

@class NSString, NSArray;

@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (nonatomic,copy) NSArray * stations; 
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setStations:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

