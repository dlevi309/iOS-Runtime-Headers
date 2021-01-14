/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
*/


@class NSDictionary, NSError;

@interface ADDataObject : NSObject {

	NSDictionary* _iAdData;
	NSError* _error;

}

@property (nonatomic,copy) NSDictionary * iAdData;              //@synthesize iAdData=_iAdData - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSDictionary *)iAdData;
-(id)initWith:(id)arg1 andError:(id)arg2 ;
-(void)setIAdData:(NSDictionary *)arg1 ;
@end

