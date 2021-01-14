/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class NSString;

@interface WFCellularDataSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	CTServerConnectionRef _connection;

}

@property (nonatomic,readonly) CTServerConnectionRef connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(CTServerConnectionRef)connection;
-(void)dealloc;
-(id)initWithServerConnection:(CTServerConnectionRef)arg1 ;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

