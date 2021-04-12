/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL areDiagnosticsEnabled; 
@property (nonatomic,readonly) BOOL requiresVisionFramework; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(BOOL)isConnected;
-(void)disconnect;
-(void)setConnected:(BOOL)arg1 ;
-(id<AXMVisionEngineNodeConnectionDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)nodeQueue;
-(void)connect:(id)arg1 ;
-(void)setDelegate:(id<AXMVisionEngineNodeConnectionDelegate>)arg1 ;
-(BOOL)areDiagnosticsEnabled;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)requiresVisionFramework;
-(id)axmDescription;
-(void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2 ;
-(void)freeResources;
-(void)setNodeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

