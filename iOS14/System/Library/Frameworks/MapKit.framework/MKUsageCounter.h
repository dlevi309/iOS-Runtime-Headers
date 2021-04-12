/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSMutableSet;

@interface MKUsageCounter : NSObject {

	NSMutableSet* _countedEventsSet;

}
+(id)sharedCounter;
-(void)countUsageOfTypeIfNeeded:(unsigned long long)arg1 ;
-(void)createCountedEventsSetIfNeeded;
-(void)count:(unsigned long long)arg1 ;
-(id)fieldNameForType:(unsigned long long)arg1 ;
@end

