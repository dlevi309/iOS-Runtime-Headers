/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <libobjc.A.dylib/NFCSessionCallbacks.h>
#import <libobjc.A.dylib/NFCHardwareManagerCallbacks.h>

@class NSMutableArray, NFCSession, NSMutableDictionary, NSArray, NSString;

@interface NFCHardwareManager : NSObject <NFCSessionCallbacks, NFCHardwareManagerCallbacks> {

	NSMutableArray* _delegates;
	NFCSession* _xpcSession;
	NSMutableDictionary* _queuedReaderSessions;

}

@property (getter=getDelegates,nonatomic,copy,readonly) NSArray * delegates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHardwareManager;
-(id)init;
-(BOOL)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2 ;
-(void)didInvalidate;
-(void)hardwareFailedToLoad;
-(id)getReaderSessionWithKey:(id)arg1 ;
-(void)removeNFCHardwareManagerCallbacksListener:(id)arg1 ;
-(void)dequeueReaderSession:(id)arg1 ;
-(void)addNFCHardwareManagerCallbacksListener:(id)arg1 ;
-(void)queueReaderSession:(id)arg1 sessionConfig:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getDelegates;
@end

