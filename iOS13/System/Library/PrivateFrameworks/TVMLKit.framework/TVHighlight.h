/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class NSString, TVTimeRange, NSURL;

@interface TVHighlight : NSObject {

	NSString* _localizedName;
	NSString* _highlightDescription;
	TVTimeRange* _timeRange;
	NSURL* _imageURL;
	TVTimeRange* _dateRange;

}

@property (nonatomic,retain) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * highlightDescription;              //@synthesize highlightDescription=_highlightDescription - In the implementation block
@property (nonatomic,retain) TVTimeRange * timeRange;                      //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) TVTimeRange * dateRange;                      //@synthesize dateRange=_dateRange - In the implementation block
-(NSString *)localizedName;
-(NSURL *)imageURL;
-(void)setTimeRange:(TVTimeRange *)arg1 ;
-(TVTimeRange *)timeRange;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(TVTimeRange *)dateRange;
-(void)setDateRange:(TVTimeRange *)arg1 ;
-(NSString *)highlightDescription;
-(void)setHighlightDescription:(NSString *)arg1 ;
@end

