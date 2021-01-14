/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setupConnection;
-(unsigned long long)owner;
-(id<CARNavigationOwnershipManagerDelegate>)delegate;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<CARNavigationOwnershipManagerDelegate>)arg1 ;
-(void)navigationOwnershipChangedTo:(unsigned long long)arg1 ;
-(NSString *)lastNavigatingBundleIdentifier;
-(NSXPCConnection *)connection;
-(BOOL)ownershipRequested;
-(void)setOwnershipRequested:(BOOL)arg1 ;
-(void)_handleConnectionReset;
-(void)requestNavigationOwnership;
-(void)releaseNavigationOwnership;
-(void)invalidate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

