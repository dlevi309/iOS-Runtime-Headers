/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WFOperation.h>

@class NSString, WFScanRequest, NSMutableSet, NSDictionary, NSSet;

@interface WFScanOperation : WFOperation {

	NSString* _targetSSID;
	WFScanRequest* _request;
	NSMutableSet* _scanResults;
	NSDictionary* _scanParameters;

}

@property (nonatomic,retain) NSMutableSet * scanResults;                 //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,retain) WFScanRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSDictionary * scanParameters;              //@synthesize scanParameters=_scanParameters - In the implementation block
@property (nonatomic,readonly) NSSet * results; 
@property (nonatomic,copy) NSString * targetSSID;                        //@synthesize targetSSID=_targetSSID - In the implementation block
-(id)description;
-(void)cancel;
-(NSSet *)results;
-(void)start;
-(void)finish;
-(void)setRequest:(WFScanRequest *)arg1 ;
-(WFScanRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)setScanResults:(NSMutableSet *)arg1 ;
-(NSMutableSet *)scanResults;
-(NSDictionary *)scanParameters;
-(void)scanDidFinishWithResults:(id)arg1 error:(int)arg2 ;
-(NSString *)targetSSID;
-(void)setTargetSSID:(NSString *)arg1 ;
-(void)setScanParameters:(NSDictionary *)arg1 ;
@end

