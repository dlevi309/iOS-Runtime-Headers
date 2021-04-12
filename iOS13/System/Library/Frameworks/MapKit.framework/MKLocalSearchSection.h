/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(BOOL)arg3 enforceServerResultsOrder:(BOOL)arg4 ;
@end

