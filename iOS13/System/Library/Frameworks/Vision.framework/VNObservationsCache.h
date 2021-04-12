/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSMapTable;

@interface VNObservationsCache : NSObject {

	NSMapTable* _observationsCache;

}
-(id)init;
-(id)observationsForKey:(id)arg1 ;
-(void)setObservations:(id)arg1 forKey:(id)arg2 ;
-(id)observationsForRequest:(id)arg1 testedKeyHandler:(/*^block*/id)arg2 ;
@end

