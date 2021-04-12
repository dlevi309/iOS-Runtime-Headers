/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/ML3DatabaseModuleContext.h>

@protocol ML3VirtualTableDelegate;
@class NSString, ML3DatabaseModule, ML3DatabaseTable, ML3DatabaseConnection;

@interface ML3VirtualTable : NSObject <ML3DatabaseModuleContext> {

	NSString* _virtualTableName;
	ML3DatabaseModule* _module;
	id<ML3VirtualTableDelegate> _delegate;
	ML3DatabaseTable* _databaseTable;
	ML3DatabaseConnection* _connection;
	shared_ptr<ML3VirtualTableDataSource>* _dataSource;

}

@property (assign,nonatomic) shared_ptr<ML3VirtualTableDataSource>* dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<ML3VirtualTableDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ML3DatabaseTable * databaseTable;                             //@synthesize databaseTable=_databaseTable - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ML3DatabaseTable *)databaseTable;
-(BOOL)unregister;
-(id<ML3VirtualTableDelegate>)delegate;
-(shared_ptr<ML3VirtualTableDataSource>*)dataSource;
-(BOOL)registerWithConnection:(id)arg1 ;
-(NSString *)name;
-(void)setDelegate:(id<ML3VirtualTableDelegate>)arg1 ;
-(void)setDataSource:(shared_ptr<ML3VirtualTableDataSource>*)arg1 ;
-(ML3DatabaseConnection *)connection;
-(void)dealloc;
-(id)initWithDatabaseTable:(id)arg1 ;
@end

