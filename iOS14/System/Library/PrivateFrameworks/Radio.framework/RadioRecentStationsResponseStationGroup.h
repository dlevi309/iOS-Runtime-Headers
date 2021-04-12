/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/


@class NSDictionary, NSString, NSArray;

@interface RadioRecentStationsResponseStationGroup : NSObject {

	NSDictionary* _responseDictionary;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
-(NSString *)localizedTitle;
-(BOOL)isActive;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)stationDictionaries;
@end

