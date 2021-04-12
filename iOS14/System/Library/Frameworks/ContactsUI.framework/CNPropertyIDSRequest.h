/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class NSArray, NSString;

@interface CNPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate> {

	NSArray* _propertyItems;
	NSString* _listenerID;
	NSString* _service;
	/*^block*/id _requestResultBlock;
	/*^block*/id _idQueryResultHandler;

}

@property (nonatomic,retain) NSArray * propertyItems;               //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,retain) NSString * listenerID;                 //@synthesize listenerID=_listenerID - In the implementation block
@property (nonatomic,retain) NSString * service;                    //@synthesize service=_service - In the implementation block
@property (copy) id requestResultBlock;                             //@synthesize requestResultBlock=_requestResultBlock - In the implementation block
@property (nonatomic,copy) id idQueryResultHandler;                 //@synthesize idQueryResultHandler=_idQueryResultHandler - In the implementation block
@property (nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWorkQueue;
-(BOOL)cancelled;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(NSString *)listenerID;
-(NSArray *)propertyItems;
-(void)setService:(NSString *)arg1 ;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(void)setListenerID:(NSString *)arg1 ;
-(void)_requestStatusOnMainQueue:(BOOL)arg1 ;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(BOOL)arg3 resultBlock:(/*^block*/id)arg4 ;
-(void)cleanupDelegate;
-(id)requestResultBlock;
-(void)setRequestResultBlock:(id)arg1 ;
-(id)idQueryResultHandler;
-(void)setIdQueryResultHandler:(id)arg1 ;
-(void)cancel;
-(NSString *)service;
@end

