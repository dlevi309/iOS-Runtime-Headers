/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REMLElementRanker.h>

@protocol OS_dispatch_queue;
@class REMLElementComparator, NSObject, NSString;

@interface _REElementRankerWrapper : NSObject <REMLElementRanker> {

	/*^block*/id _featureMapGenerator;
	REMLElementComparator* _comparator;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id featureMapGenerator;                            //@synthesize featureMapGenerator=_featureMapGenerator - In the implementation block
@property (nonatomic,retain) REMLElementComparator * comparator;              //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setComparator:(REMLElementComparator *)arg1 ;
-(REMLElementComparator *)comparator;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldHideElement:(id)arg1 ;
-(void)setFeatureMapGenerator:(id)arg1 ;
-(id)featureMapGenerator;
@end

