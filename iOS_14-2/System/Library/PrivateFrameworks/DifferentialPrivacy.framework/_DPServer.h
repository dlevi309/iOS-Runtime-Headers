/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_DPDaemonProtocol.h>

@class NSXPCListener, _DPStorage, NSString;

@interface _DPServer : NSObject <NSXPCListenerDelegate, _DPDaemonProtocol> {

	BOOL _metadataMethodsAllowed;
	NSXPCListener* _listener;
	_DPStorage* _db;

}

@property (nonatomic,readonly) NSXPCListener * listener;               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) _DPStorage * db;                        //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) BOOL metadataMethodsAllowed;              //@synthesize metadataMethodsAllowed=_metadataMethodsAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldNotRecord:(id)arg1 forKey:(id)arg2 ;
-(_DPStorage *)db;
-(id)init;
-(void)start;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)recordBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)reportsNotYetSubmittedWithReply:(/*^block*/id)arg1 ;
-(void)retireReports:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)initWithDatabaseDirectoryPath:(id)arg1 reportsDirectoryPath:(id)arg2 enablePeriodicTasks:(BOOL)arg3 enterSandbox:(BOOL)arg4 ;
-(void)setupPeriodicTasksWith:(id)arg1 ;
-(void)recordValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 usingSelector:(SEL)arg4 ;
-(void)recordValues:(id)arg1 forKey:(id)arg2 usingSelector:(SEL)arg3 ;
-(BOOL)metadataMethodsAllowed;
-(id)reportsNotYetSubmittedInDirecory:(id)arg1 ;
-(BOOL)retireReports:(id)arg1 inDirectory:(id)arg2 ;
-(void)setMetadataMethodsAllowed:(BOOL)arg1 ;
@end

