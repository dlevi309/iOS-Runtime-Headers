/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class NSArray, LAContext, NSDictionary, TKClientToken, NSString, NSNumber;

@interface TKClientTokenSession : NSObject {

	long long _connectionIdentifier;
	NSArray* _advertisedItems;
	BOOL _authenticateWhenNeeded;
	BOOL __testing_AuthenticateInternally;
	LAContext* _LAContext;
	NSDictionary* _parameters;
	TKClientToken* _token;
	NSString* _slotName;
	NSNumber* _sessionID;

}

@property (nonatomic,readonly) NSNumber * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) LAContext * LAContext;                           //@synthesize LAContext=_LAContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                       //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) TKClientToken * token;                           //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL authenticateWhenNeeded;                       //@synthesize authenticateWhenNeeded=_authenticateWhenNeeded - In the implementation block
@property (nonatomic,readonly) NSArray * keys; 
@property (nonatomic,readonly) NSArray * certificates; 
@property (nonatomic,readonly) NSArray * identities; 
@property (nonatomic,readonly) NSString * slotName;                             //@synthesize slotName=_slotName - In the implementation block
@property (assign,nonatomic) BOOL _testing_AuthenticateInternally;              //@synthesize _testing_AuthenticateInternally=__testing_AuthenticateInternally - In the implementation block
-(NSDictionary *)parameters;
-(BOOL)deleteObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(NSArray *)keys;
-(NSNumber *)sessionID;
-(id)itemsOfClass:(id)arg1 ;
-(BOOL)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id*)arg3 ;
-(NSArray *)certificates;
-(void)terminate;
-(id)objectForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)advertisedItems;
-(void)setAuthenticateWhenNeeded:(BOOL)arg1 ;
-(void)set_testing_AuthenticateInternally:(BOOL)arg1 ;
-(LAContext *)LAContext;
-(BOOL)_testing_AuthenticateInternally;
-(NSArray *)identities;
-(BOOL)ensureSessionWithClient:(id)arg1 connectionIdentifier:(long long)arg2 error:(id*)arg3 ;
-(TKClientToken *)token;
-(id)createObjectWithAttributes:(id)arg1 error:(id*)arg2 ;
-(id)withError:(id*)arg1 accessControl:(SecAccessControlRef)arg2 invoke:(/*^block*/id)arg3 ;
-(id)initWithTokenID:(id)arg1 LAContext:(id)arg2 error:(id*)arg3 ;
-(NSString *)slotName;
-(BOOL)authenticateWhenNeeded;
-(void)dealloc;
@end

