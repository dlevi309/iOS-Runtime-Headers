/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)dealloc;
-(void)setSaveHandler:(id)arg1 ;
-(id)loginHandler;
-(id)saveHandler;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)pocketAPI:(id)arg1 savedURL:(id)arg2 ;
-(void)pocketAPI:(id)arg1 failedToSaveURL:(id)arg2 error:(id)arg3 ;
-(void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4 ;
-(void)setLoginHandler:(id)arg1 ;
@end

