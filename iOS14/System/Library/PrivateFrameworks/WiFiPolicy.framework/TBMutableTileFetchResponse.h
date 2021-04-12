/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/TBFetchResponse.h>

@class NSArray, NSError, NSSet, NSDictionary, NSMutableSet, NSString;

@interface TBMutableTileFetchResponse : NSObject <TBFetchResponse> {

	NSError* error;
	NSArray* results;
	NSDictionary* resultsByBSSID;
	NSMutableSet* _mutableTiles;

}

@property (nonatomic,retain) NSMutableSet * mutableTiles;                  //@synthesize mutableTiles=_mutableTiles - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) NSSet * tiles; 
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)results;
-(id)init;
-(NSError *)error;
-(void)addResponse:(id)arg1 ;
-(NSSet *)tiles;
-(NSDictionary *)resultsByBSSID;
-(NSMutableSet *)mutableTiles;
-(void)setMutableTiles:(NSMutableSet *)arg1 ;
@end

