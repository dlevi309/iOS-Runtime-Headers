/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString;

@interface DADataHandler : NSObject {

	void* _container;
	NSString* _changeTrackingID;

}

@property (nonatomic,copy) NSString * changeTrackingID;              //@synthesize changeTrackingID=_changeTrackingID - In the implementation block
@property (assign,nonatomic) void* container;                        //@synthesize container=_container - In the implementation block
+(id)newDataHandlerForDataclass:(long long)arg1 container:(void*)arg2 changeTrackingID:(id)arg3 ;
-(long long)dataclass;
-(void)openDB;
-(void)setContainer:(void*)arg1 ;
-(NSString *)changeTrackingID;
-(void*)container;
-(id)initWithContainer:(void*)arg1 changeTrackingID:(id)arg2 ;
-(int)getIdFromLocalObject:(void*)arg1 ;
-(void*)copyLocalObjectFromId:(int)arg1 ;
-(BOOL)saveContainer;
-(id)copyOfAllLocalObjectsInContainer;
-(void)drainContainer;
-(BOOL)wipeServerIds;
-(void)drainSuperfluousChanges;
-(void)dealloc;
-(BOOL)closeDBAndSave:(BOOL)arg1 ;
-(id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3 ;
-(id)getDAExceptionObjectWithLocalItem:(void*)arg1 originalEvent:(id)arg2 account:(id)arg3 ;
-(void)setChangeTrackingID:(NSString *)arg1 ;
@end

