/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class CLLocation, NSURL, NSString;

@interface IMMapURLLocationInfo : NSObject {

	CLLocation* _location;
	NSURL* _url;
	NSString* _query;
	NSString* _address;

}

@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSString * address;                   //@synthesize address=_address - In the implementation block
+(id)locationInfoFromURL:(id)arg1 ;
-(NSString *)query;
-(CLLocation *)location;
-(NSURL *)url;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
@end

