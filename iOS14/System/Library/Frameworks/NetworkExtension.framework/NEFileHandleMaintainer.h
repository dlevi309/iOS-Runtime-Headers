/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_xpc_object;
@class NSMutableArray, NSObject, NSString;

@interface NEFileHandleMaintainer : NSObject {

	BOOL _changed;
	BOOL _isOwnerMode;
	NSMutableArray* _fileHandles;
	/*^block*/id _receivedHandlesCallback;
	NSObject*<OS_xpc_object> _auxiliaryDataDictionary;
	NSString* _eventName;

}

@property (retain) NSMutableArray * fileHandles;                                  //@synthesize fileHandles=_fileHandles - In the implementation block
@property (assign) BOOL changed;                                                  //@synthesize changed=_changed - In the implementation block
@property (copy) id receivedHandlesCallback;                                      //@synthesize receivedHandlesCallback=_receivedHandlesCallback - In the implementation block
@property (assign) BOOL isOwnerMode;                                              //@synthesize isOwnerMode=_isOwnerMode - In the implementation block
@property (retain) NSObject*<OS_xpc_object> auxiliaryDataDictionary;              //@synthesize auxiliaryDataDictionary=_auxiliaryDataDictionary - In the implementation block
@property (retain) NSString * eventName;                                          //@synthesize eventName=_eventName - In the implementation block
+(id)sharedMaintainer;
-(void)commit;
-(id)copyAuxiliaryDataForKey:(id)arg1 ;
-(void)setFileHandles:(NSMutableArray *)arg1 ;
-(id)init;
-(BOOL)changed;
-(void)iterateFileHandlesWithBlock:(/*^block*/id)arg1 ;
-(NSString *)eventName;
-(NSObject*<OS_xpc_object>)auxiliaryDataDictionary;
-(void)setChanged:(BOOL)arg1 ;
-(void)setEventName:(NSString *)arg1 ;
-(void)setReceivedHandlesCallback:(id)arg1 ;
-(id)receivedHandlesCallback;
-(id)createEvent;
-(void)setFileHandle:(id)arg1 matchingPredicate:(/*^block*/id)arg2 ;
-(void)setIsOwnerMode:(BOOL)arg1 ;
-(void)setAuxiliaryDataDictionary:(NSObject*<OS_xpc_object>)arg1 ;
-(void)resetFileHandlesFromEvent:(id)arg1 ;
-(NSMutableArray *)fileHandles;
-(void)startOwnerModeWithEventName:(id)arg1 handlesReceivedCallback:(/*^block*/id)arg2 ;
-(void)removeFileHandleMatchingPredicate:(/*^block*/id)arg1 ;
-(BOOL)isOwnerMode;
-(void)setAuxiliaryData:(id)arg1 forKey:(id)arg2 ;
@end

