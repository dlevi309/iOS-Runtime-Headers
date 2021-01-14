/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/TBFetchResponse.h>

@class NSArray, NSSet, NSError, NSDictionary, NSString;

@interface TBErrorFetchResponse : NSObject <TBFetchResponse> {

	NSArray* results;
	NSSet* tiles;
	NSError* _error;

}

@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,readonly) NSSet * tiles; 
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithError:(id)arg1 ;
+(id)remoteResponseWithError:(id)arg1 ;
-(NSArray *)results;
-(id)initWithError:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSSet *)tiles;
@end

