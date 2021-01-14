/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject {

	BOOL _shouldInterleaveClientResults;
	BOOL _enforceServerResultsOrder;
	NSArray* _results;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * results;                               //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL shouldInterleaveClientResults;              //@synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults - In the implementation block
@property (nonatomic,readonly) BOOL enforceServerResultsOrder;                  //@synthesize enforceServerResultsOrder=_enforceServerResultsOrder - In the implementation block
-(NSArray *)results;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(BOOL)arg3 enforceServerResultsOrder:(BOOL)arg4 ;
-(NSString *)title;
@end

