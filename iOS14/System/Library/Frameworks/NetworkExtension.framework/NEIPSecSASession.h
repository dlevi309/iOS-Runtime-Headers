/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEIPSecSASessionDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray;

@interface NEIPSecSASession : NSObject {

	NSString* _name;
	NSObject*<NEIPSecSASessionDelegate> _delegate;
	NSMutableArray* _securityAssociations;
	NSMutableArray* _larvalSAs;
	unsigned long long _uniqueIndex;
	NSObject*<OS_dispatch_queue> _internalDelegateQueue;

}

@property (retain) NSMutableArray * securityAssociations;                           //@synthesize securityAssociations=_securityAssociations - In the implementation block
@property (retain) NSMutableArray * larvalSAs;                                      //@synthesize larvalSAs=_larvalSAs - In the implementation block
@property (assign,nonatomic) unsigned long long uniqueIndex;                        //@synthesize uniqueIndex=_uniqueIndex - In the implementation block
@property (retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> internalDelegateQueue;              //@synthesize internalDelegateQueue=_internalDelegateQueue - In the implementation block
@property (__weak) NSObject*<NEIPSecSASessionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue; 
-(NSObject*<NEIPSecSASessionDelegate>)delegate;
-(BOOL)addSA:(id)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)name;
-(void)setDelegate:(NSObject*<NEIPSecSASessionDelegate>)arg1 ;
-(id)description;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)uniqueIndex;
-(void)setUniqueIndex:(unsigned long long)arg1 ;
-(id)copyEmptySASession;
-(BOOL)updateSA:(id)arg1 ;
-(BOOL)addLarvalSA:(id)arg1 ;
-(BOOL)migrateSA:(id)arg1 ;
-(void)startIdleTimeout:(unsigned)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3 ;
-(void)startBlackholeDetection:(unsigned)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3 ;
-(BOOL)removeSA:(id)arg1 ;
-(void)removeAllSAs;
-(NSMutableArray *)larvalSAs;
-(void)setSecurityAssociations:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)setLarvalSAs:(NSMutableArray *)arg1 ;
-(void)setInternalDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalDelegateQueue;
-(NSMutableArray *)securityAssociations;
@end

