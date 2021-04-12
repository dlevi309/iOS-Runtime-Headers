/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
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

