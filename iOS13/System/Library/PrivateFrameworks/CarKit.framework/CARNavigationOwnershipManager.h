/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/CRCarPlayNavigationOwnerClient.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol CARNavigationOwnershipManagerDelegate;
@class NSXPCConnection, NSString;

@interface CARNavigationOwnershipManager : NSObject <CRCarPlayNavigationOwnerClient, BSInvalidatable> {

	BOOL _ownershipRequested;
	NSXPCConnection* _connection;
	NSString* _identifier;
	id<CARNavigationOwnershipManagerDelegate> _delegate;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL ownershipRequested;                                                //@synthesize ownershipRequested=_ownershipRequested - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CARNavigationOwnershipManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long owner; 
@property (nonatomic,readonly) NSString * lastNavigatingBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<CARNavigationOwnershipManagerDelegate>)delegate;
-(void)setDelegate:(id<CARNavigationOwnershipManagerDelegate>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSXPCConnection *)connection;
-(unsigned long long)owner;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)_setupConnection;
-(void)navigationOwnershipChangedTo:(unsigned long long)arg1 ;
-(NSString *)lastNavigatingBundleIdentifier;
-(void)setOwnershipRequested:(BOOL)arg1 ;
-(void)_handleConnectionReset;
-(BOOL)ownershipRequested;
-(void)requestNavigationOwnership;
-(void)releaseNavigationOwnership;
@end

