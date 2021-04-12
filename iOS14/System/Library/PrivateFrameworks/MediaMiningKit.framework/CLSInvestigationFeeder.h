/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSInvestigationInterviewDelegate.h>

@class NSMutableSet, NSSet, NSDate, NSString;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate> {

	unsigned long long _locationClusteringAlgorithm;
	BOOL _allowsInterview;
	NSMutableSet* _focusItems;
	NSSet* _focusPeopleUUIDs;

}

@property (nonatomic,readonly) NSMutableSet * focusItems;                                 //@synthesize focusItems=_focusItems - In the implementation block
@property (nonatomic,retain) NSSet * focusPeopleUUIDs;                                    //@synthesize focusPeopleUUIDs=_focusPeopleUUIDs - In the implementation block
@property (assign,nonatomic) unsigned long long locationClusteringAlgorithm;              //@synthesize locationClusteringAlgorithm=_locationClusteringAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL allowsInterview;                                        //@synthesize allowsInterview=_allowsInterview - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)universalEndDate;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)init;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(NSDate *)universalStartDate;
-(unsigned long long)numberOfItems;
-(id)localStartDateComponents;
-(id)approximateLocation;
-(id)localEndDateComponents;
-(unsigned long long)numberOfRegularGemItems;
-(id)prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfShinyGemItems;
-(double)behavioralScore;
-(void)setLocationClusteringAlgorithm:(unsigned long long)arg1 ;
-(void)setFocusPeopleUUIDs:(NSSet *)arg1 ;
-(unsigned long long)numberOfItemsInInvestigation:(id)arg1 ;
-(void)enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersonNames:(id)arg1 withGaussiansUsingBlock:(/*^block*/id)arg2 ;
-(id)_prepareFeederWithProgressBlock:(/*^block*/id)arg1 ;
-(unsigned long long)locationClusteringAlgorithm;
-(BOOL)allowsInterview;
-(void)setAllowsInterview:(BOOL)arg1 ;
-(NSMutableSet *)focusItems;
-(NSSet *)focusPeopleUUIDs;
@end

