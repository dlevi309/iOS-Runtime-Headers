/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSString, MKLocalSearch;

@interface CalGeocoder : NSObject {

	NSString* _locationString;
	/*^block*/id _completionBlock;
	MKLocalSearch* _search;

}

@property (nonatomic,retain) NSString * locationString;              //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,copy) id completionBlock;                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) MKLocalSearch * search;                 //@synthesize search=_search - In the implementation block
+(void)geocodeLocationString:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(MKLocalSearch *)search;
-(void)setSearch:(MKLocalSearch *)arg1 ;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithLocationString:(id)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(void)startGeocoding;
@end

