/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/RERemoteTrainingServerInterface.h>

@class NSXPCConnection, NSString;

@interface RERemoteTrainingServer : NSObject <RERemoteTrainingServerInterface> {

	NSXPCConnection* _connection;
	NSString* _processName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clearConnection;
-(void)_queue_setupConnectionIfNeeded;
-(void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithTargetProcessName:(id)arg1 ;
@end

