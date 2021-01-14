/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(MKLocalSearch *)search;
-(void)setSearch:(MKLocalSearch *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithLocationString:(id)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(void)startGeocoding;
@end

