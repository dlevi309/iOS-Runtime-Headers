/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <libobjc.A.dylib/SCLSuppressSchoolModeAssertionXPCServer.h>

@protocol SCLSuppressSchoolModeAssertionClientDelegate;
@class NSXPCConnection, NSString;

@interface SCLSuppressSchoolModeAssertionClient : NSObject <SCLSuppressSchoolModeAssertionXPCServer> {

	BOOL _acquired;
	BOOL _entitled;
	id<SCLSuppressSchoolModeAssertionClientDelegate> _delegate;
	NSXPCConnection* _connection;
	NSString* _explanation;

}

@property (assign,getter=isAcquired,nonatomic) BOOL acquired;                                               //@synthesize acquired=_acquired - In the implementation block
@property (nonatomic,copy,readonly) NSString * explanation;                                                 //@synthesize explanation=_explanation - In the implementation block
@property (assign,getter=isEntitled,nonatomic) BOOL entitled;                                               //@synthesize entitled=_entitled - In the implementation block
@property (assign,nonatomic,__weak) id<SCLSuppressSchoolModeAssertionClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(BOOL)isEntitled;
-(id<SCLSuppressSchoolModeAssertionClientDelegate>)delegate;
-(BOOL)isAcquired;
-(void)connectionDidInvalidate;
-(void)setDelegate:(id<SCLSuppressSchoolModeAssertionClientDelegate>)arg1 ;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(void)setEntitled:(BOOL)arg1 ;
-(NSString *)explanation;
-(void)setAcquired:(BOOL)arg1 ;
-(oneway void)acquireWithExplanation:(id)arg1 UUID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

