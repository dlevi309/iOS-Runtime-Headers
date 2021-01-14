/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)setImageURL:(NSURL *)arg1 ;
-(TVTimeRange *)dateRange;
-(void)setTimeRange:(TVTimeRange *)arg1 ;
-(TVTimeRange *)timeRange;
-(NSURL *)imageURL;
-(void)setDateRange:(TVTimeRange *)arg1 ;
-(NSString *)highlightDescription;
-(void)setHighlightDescription:(NSString *)arg1 ;
@end

