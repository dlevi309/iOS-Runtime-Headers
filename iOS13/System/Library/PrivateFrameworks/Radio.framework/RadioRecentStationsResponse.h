/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/


@class NSDictionary, NSArray;

@interface RadioRecentStationsResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
@property (nonatomic,copy,readonly) NSArray * stationGroups; 
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)stationGroups;
-(NSArray *)stationDictionaries;
@end

