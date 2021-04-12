/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/


@class NSString, NSArray;

@interface STSSearchResultSection : NSObject {

	NSString* _title;
	NSArray* _results;

}

@property (nonatomic,retain) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * results;              //@synthesize results=_results - In the implementation block
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithResultsArray:(id)arg1 ;
-(id)logResults;
@end

