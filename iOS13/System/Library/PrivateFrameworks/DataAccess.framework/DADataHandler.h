/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void*)container;
-(void)setContainer:(void*)arg1 ;
-(long long)dataclass;
-(NSString *)changeTrackingID;
-(id)initWithContainer:(void*)arg1 changeTrackingID:(id)arg2 ;
-(int)getIdFromLocalObject:(void*)arg1 ;
-(void*)copyLocalObjectFromId:(int)arg1 ;
-(BOOL)saveContainer;
-(id)copyOfAllLocalObjectsInContainer;
-(void)drainContainer;
-(BOOL)wipeServerIds;
-(void)drainSuperfluousChanges;
-(void)openDB;
-(BOOL)closeDBAndSave:(BOOL)arg1 ;
-(id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3 ;
-(id)getDAExceptionObjectWithLocalItem:(void*)arg1 originalEvent:(id)arg2 account:(id)arg3 ;
-(void)setChangeTrackingID:(NSString *)arg1 ;
@end

