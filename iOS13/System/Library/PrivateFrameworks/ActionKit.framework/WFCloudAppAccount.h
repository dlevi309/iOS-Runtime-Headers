/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFPasswordAccount.h>
#import <libobjc.A.dylib/CLAPIEngineDelegate.h>

@class CLAPIEngine, NSString;

@interface WFCloudAppAccount : WFPasswordAccount <CLAPIEngineDelegate> {

	CLAPIEngine* _engine;

}

@property (nonatomic,readonly) CLAPIEngine * engine;                //@synthesize engine=_engine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedServiceName;
+(id)serviceID;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
-(void)dealloc;
-(CLAPIEngine *)engine;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
@end

