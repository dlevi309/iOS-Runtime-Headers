/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/TBFetchResponse.h>

@class NSSet, NSArray, NSError, NSDictionary, NSString;

@interface TBRemoteFetchResponse : NSObject <TBFetchResponse> {

	NSSet* _tiles;
	NSArray* _results;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * results;                            //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSSet * tiles;                              //@synthesize tiles=_tiles - In the implementation block
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3 ;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSSet *)tiles;
-(id)initWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3 ;
@end

