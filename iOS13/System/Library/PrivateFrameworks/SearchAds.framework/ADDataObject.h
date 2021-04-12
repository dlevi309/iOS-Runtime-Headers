/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
*/


@class NSDictionary, NSError;

@interface ADDataObject : NSObject {

	NSDictionary* _iAdData;
	NSError* _error;

}

@property (nonatomic,copy) NSDictionary * iAdData;              //@synthesize iAdData=_iAdData - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWith:(id)arg1 andError:(id)arg2 ;
-(NSDictionary *)iAdData;
-(void)setIAdData:(NSDictionary *)arg1 ;
@end

