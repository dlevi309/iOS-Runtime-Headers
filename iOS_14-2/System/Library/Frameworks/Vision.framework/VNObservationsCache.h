/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSMapTable;

@interface VNObservationsCache : NSObject {

	NSMapTable* _observationsCache;

}
-(id)init;
-(id)observationsForRequest:(id)arg1 testedKeyHandler:(/*^block*/id)arg2 ;
-(void)setObservations:(id)arg1 forKey:(id)arg2 ;
-(id)observationsForKey:(id)arg1 ;
@end

