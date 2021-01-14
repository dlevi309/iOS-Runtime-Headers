/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
*/


@class NSArray, NSDictionary, NSError;

@interface AlgosScoreCSVReader : NSObject {

	NSArray* _rows;
	NSDictionary* _headings;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * rows;                       //@synthesize rows=_rows - In the implementation block
@property (nonatomic,retain) NSDictionary * headings;              //@synthesize headings=_headings - In the implementation block
@property (nonatomic,retain) NSError * error;                      //@synthesize error=_error - In the implementation block
+(id)csvReader:(id)arg1 header:(BOOL)arg2 ;
-(void)setRows:(NSArray *)arg1 ;
-(NSArray *)rows;
-(NSDictionary *)headings;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setHeadings:(NSDictionary *)arg1 ;
-(void)debugPrint:(int)arg1 ;
-(id)atRow:(id)arg1 col:(id)arg2 ;
-(double)doubleAtRow:(id)arg1 col:(id)arg2 defaultValue:(double)arg3 ;
-(long long)intAtRow:(id)arg1 col:(id)arg2 defaultValue:(long long)arg3 ;
-(id)initWithFileName:(id)arg1 header:(BOOL)arg2 ;
-(id)stripAndQuoteString:(id)arg1 ;
-(id)fixStrings:(id)arg1 ;
-(id)parseFile:(id)arg1 header:(BOOL)arg2 ;
-(void)sortOnColumnIndex:(long long)arg1 ascending:(BOOL)arg2 ;
-(id)atRowIndex:(long long)arg1 col:(id)arg2 ;
-(double)doubleAtRow:(id)arg1 colIndex:(long long)arg2 defaultValue:(double)arg3 ;
-(long long)intAtRow:(id)arg1 colIndex:(long long)arg2 defaultValue:(long long)arg3 ;
-(void)sortOnColumn:(id)arg1 ascending:(BOOL)arg2 ;
@end

