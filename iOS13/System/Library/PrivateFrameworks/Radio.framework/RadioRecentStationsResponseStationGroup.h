/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/


@class NSDictionary, NSString, NSArray;

@interface RadioRecentStationsResponseStationGroup : NSObject {

	NSDictionary* _responseDictionary;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
-(BOOL)isActive;
-(NSString *)localizedTitle;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)stationDictionaries;
@end

