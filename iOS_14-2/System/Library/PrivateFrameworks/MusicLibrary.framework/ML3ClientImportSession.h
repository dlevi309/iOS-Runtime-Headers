/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/ML3ClientImportSessionXPCInterface.h>

@protocol ML3ClientImportSessionDelegate;
@class NSXPCConnection, ML3ClientImportSessionConfiguration, NSProgress, NSString;

@interface ML3ClientImportSession : NSObject <ML3ClientImportSessionXPCInterface> {

	NSXPCConnection* _xpcClientConnection;
	id<ML3ClientImportSessionDelegate> _delegate;
	ML3ClientImportSessionConfiguration* _sessionConfiguration;
	BOOL _hasActiveSession;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)finish;
-(NSProgress *)progress;
-(BOOL)start;
-(BOOL)addItems:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 ;
-(id)_xpcClientConnection;
-(BOOL)cancel;
-(BOOL)removeItems:(id)arg1 ;
-(BOOL)updateItems:(id)arg1 ;
-(id)addItemsReturningResult:(id)arg1 ;
-(id)updateItemsReturningResult:(id)arg1 ;
-(id)removeItemsReturningResult:(id)arg1 ;
-(void)sessionFailedToAddItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionFailedToUpdateItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionFailedToRemoveItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionDidUpdateProgress:(float)arg1 ;
@end

