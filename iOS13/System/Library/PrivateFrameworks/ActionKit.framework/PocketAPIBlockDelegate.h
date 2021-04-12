/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/PocketAPIDelegate.h>

@class NSString;

@interface PocketAPIBlockDelegate : NSObject <PocketAPIDelegate> {

	/*^block*/id loginHandler;
	/*^block*/id saveHandler;
	/*^block*/id responseHandler;

}

@property (nonatomic,copy) id loginHandler; 
@property (nonatomic,copy) id saveHandler; 
@property (nonatomic,copy) id responseHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateWithLoginHandler:(/*^block*/id)arg1 ;
+(id)delegateWithSaveHandler:(/*^block*/id)arg1 ;
+(id)delegateWithResponseHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setSaveHandler:(id)arg1 ;
-(id)saveHandler;
-(id)loginHandler;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)pocketAPI:(id)arg1 savedURL:(id)arg2 ;
-(void)pocketAPI:(id)arg1 failedToSaveURL:(id)arg2 error:(id)arg3 ;
-(void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4 ;
-(void)setLoginHandler:(id)arg1 ;
@end

