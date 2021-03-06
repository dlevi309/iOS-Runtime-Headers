/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/TBFetchResponse.h>

@class NSError, NSSet, NSArray, NSDictionary, NSString;

@interface TBLocalFetchResponse : NSObject <TBFetchResponse> {

	NSError* error;
	NSSet* _tiles;
	NSArray* _results;
	NSDictionary* _resultsByBSSID;

}

@property (nonatomic,retain) NSArray * results;                          //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSDictionary * resultsByBSSID;              //@synthesize resultsByBSSID=_resultsByBSSID - In the implementation block
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) NSSet * tiles;                            //@synthesize tiles=_tiles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithResultsByBSSID:(id)arg1 ;
+(id)responseWithResults:(id)arg1 entityDescription:(id)arg2 ;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(NSError *)error;
-(NSSet *)tiles;
-(NSDictionary *)resultsByBSSID;
-(id)initWithResults:(id)arg1 entityDescription:(id)arg2 ;
-(id)initWithResultsByBSSID:(id)arg1 ;
-(void)setResultsByBSSID:(NSDictionary *)arg1 ;
@end

