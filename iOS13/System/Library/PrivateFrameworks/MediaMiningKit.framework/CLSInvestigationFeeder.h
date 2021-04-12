/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
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
-(id)init;
-(unsigned long long)numberOfItems;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)approximateLocation;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(double)behavioralScore;
-(id)allItems;
-(unsigned long long)numberOfItemsInInvestigation:(id)arg1 ;
-(CGImageRef)itemThumbnailInInvestigation:(id)arg1 atIndex:(unsigned long long)arg2 withResolution:(unsigned long long)arg3 ;
-(id)localStartDateComponents;
-(id)localEndDateComponents;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGImageRef)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2 ;
-(unsigned long long)numberOfShinyGemItems;
-(unsigned long long)numberOfRegularGemItems;
-(void)enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersonNames:(id)arg1 withGaussiansUsingBlock:(/*^block*/id)arg2 ;
-(id)_prepareFeederWithProgressBlock:(/*^block*/id)arg1 ;
-(id)prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(unsigned long long)locationClusteringAlgorithm;
-(void)setLocationClusteringAlgorithm:(unsigned long long)arg1 ;
-(BOOL)allowsInterview;
-(void)setAllowsInterview:(BOOL)arg1 ;
-(NSMutableSet *)focusItems;
-(NSSet *)focusPeopleUUIDs;
-(void)setFocusPeopleUUIDs:(NSSet *)arg1 ;
@end

