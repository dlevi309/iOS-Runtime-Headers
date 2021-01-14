/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSNumber;

@interface PLOPTICSClusterDescriptor : NSObject {

	NSNumber* _startIndex;
	NSNumber* _endIndex;
	NSNumber* _clusterSize;
	NSNumber* _rootLevel;
	NSNumber* _minCoreDistanceIndex;
	NSNumber* _minCoreDistance;

}

@property (nonatomic,retain,readonly) NSNumber * startIndex;                        //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * endIndex;                          //@synthesize endIndex=_endIndex - In the implementation block
@property (nonatomic,readonly) NSRange indexRange; 
@property (nonatomic,retain,readonly) NSNumber * clusterSize;                       //@synthesize clusterSize=_clusterSize - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * rootLevel;                         //@synthesize rootLevel=_rootLevel - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minCoreDistanceIndex;              //@synthesize minCoreDistanceIndex=_minCoreDistanceIndex - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minCoreDistance;                   //@synthesize minCoreDistance=_minCoreDistance - In the implementation block
+(id)clusterDescriptor:(NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4 ;
-(NSNumber *)startIndex;
-(NSNumber *)endIndex;
-(NSRange)indexRange;
-(id)initWithParameters:(NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4 ;
-(NSNumber *)clusterSize;
-(NSNumber *)minCoreDistanceIndex;
-(NSNumber *)minCoreDistance;
-(NSNumber *)rootLevel;
@end

