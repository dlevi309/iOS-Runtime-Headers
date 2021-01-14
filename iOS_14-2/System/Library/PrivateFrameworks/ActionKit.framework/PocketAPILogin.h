/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)uuid;
-(NSString *)accessToken;
-(NSString *)requestToken;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)redirectURL;
-(PocketAPI *)API;
-(void)fetchRequestToken;
-(void)dealloc;
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

