/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@protocol PocketAPIDelegate;
@class PocketAPI, NSString, NSOperationQueue;

@interface PocketAPILogin : NSObject <NSSecureCoding, PocketAPIDelegate> {

	PocketAPI* API;
	NSString* uuid;
	NSString* requestToken;
	NSString* accessToken;
	NSOperationQueue* operationQueue;
	id<PocketAPIDelegate> delegate;
	BOOL didStart;
	BOOL didFinish;
	BOOL reverseAuth;

}

@property (nonatomic,retain,readonly) PocketAPI * API; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * requestToken; 
@property (nonatomic,retain,readonly) NSString * accessToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(PocketAPI *)API;
-(NSString *)accessToken;
-(NSString *)requestToken;
-(id)redirectURL;
-(void)fetchRequestToken;
-(void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2 ;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)_setRequestToken:(id)arg1 ;
-(void)_setReverseAuth:(BOOL)arg1 ;
-(id)initWithAPI:(id)arg1 delegate:(id)arg2 ;
-(void)convertRequestTokenToAccessToken;
-(void)loginDidStart;
-(void)loginDidFinish:(BOOL)arg1 ;
@end

