/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <AXMediaUtilities/AXMDescribing.h>

@protocol AXMVisionEngineNodeConnectionDelegate, OS_dispatch_queue;
@class NSString, NSObject;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing> {

	BOOL _connected;
	BOOL _enabled;
	id<AXMVisionEngineNodeConnectionDelegate> _delegate;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _nodeQueue;

}

@property (assign,getter=isConnected,nonatomic) BOOL connected;                                      //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic,__weak) id<AXMVisionEngineNodeConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nodeQueue;                                 //@synthesize nodeQueue=_nodeQueue - In the implementation block
@property (nonatomic,readonly) BOOL requiresVisionFramework; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<AXMVisionEngineNodeConnectionDelegate>)delegate;
-(void)setDelegate:(id<AXMVisionEngineNodeConnectionDelegate>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)disconnect;
-(BOOL)isEnabled;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)requiresVisionFramework;
-(void)connect:(id)arg1 ;
-(id)axmDescription;
-(void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2 ;
-(void)freeResources;
-(NSObject*<OS_dispatch_queue>)nodeQueue;
-(void)setNodeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

