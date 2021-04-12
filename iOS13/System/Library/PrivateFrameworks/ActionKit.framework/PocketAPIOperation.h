/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@protocol PocketAPIDelegate;
@class PocketAPI, NSString, NSDictionary, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSError;

@interface PocketAPIOperation : NSOperation <NSURLConnectionDelegate, NSCopying, PocketAPIDelegate> {

	PocketAPI* API;
	id<PocketAPIDelegate> delegate;
	int domain;
	int HTTPMethod;
	NSString* APIMethod;
	NSDictionary* arguments;
	NSURLConnection* connection;
	NSHTTPURLResponse* response;
	NSMutableData* data;
	NSError* error;
	NSString* baseURLPath;
	BOOL finishedLoading;
	BOOL attemptedRelogin;

}

@property (nonatomic,retain) PocketAPI * API; 
@property (nonatomic,retain) id<PocketAPIDelegate> delegate; 
@property (nonatomic,retain,readonly) NSString * baseURLPath; 
@property (assign,nonatomic) int domain; 
@property (assign,nonatomic) int HTTPMethod; 
@property (nonatomic,retain) NSString * APIMethod; 
@property (nonatomic,retain) NSDictionary * arguments; 
@property (nonatomic,retain,readonly) NSURLConnection * connection; 
@property (nonatomic,retain,readonly) NSHTTPURLResponse * response; 
@property (nonatomic,retain,readonly) NSMutableData * data; 
@property (nonatomic,retain,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)encodeForURL:(id)arg1 ;
+(id)decodeForURL:(id)arg1 ;
+(id)errorFromXError:(id)arg1 withErrorCode:(unsigned long long)arg2 HTTPStatusCode:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)domain;
-(id<PocketAPIDelegate>)delegate;
-(void)setDelegate:(id<PocketAPIDelegate>)arg1 ;
-(NSMutableData *)data;
-(NSError *)error;
-(NSDictionary *)arguments;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)setArguments:(NSDictionary *)arg1 ;
-(NSURLConnection *)connection;
-(PocketAPI *)API;
-(void)setHTTPMethod:(int)arg1 ;
-(NSHTTPURLResponse *)response;
-(void)setDomain:(int)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(int)HTTPMethod;
-(id)responseDictionary;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(NSString *)APIMethod;
-(NSString *)baseURLPath;
-(void)connectionFinishedWithError:(id)arg1 ;
-(id)pkt_requestArguments;
-(id)pkt_URLRequest;
-(void)pkt_connectionFinishedLoading;
-(void)setAPI:(PocketAPI *)arg1 ;
-(void)setAPIMethod:(NSString *)arg1 ;
@end

