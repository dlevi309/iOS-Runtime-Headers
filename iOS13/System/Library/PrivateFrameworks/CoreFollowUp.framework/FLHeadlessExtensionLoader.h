/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@protocol FLExtensionHostContextInterface;
@class FLExtensionContext, NSExtension, NSString, NSUUID;

@interface FLHeadlessExtensionLoader : NSObject {

	FLExtensionContext* _extensionContext;
	id<FLExtensionHostContextInterface> _delegate;
	NSExtension* _extension;
	/*^block*/id _requestInterruptionBlock;
	NSString* _identifier;
	NSUUID* _sessionID;

}

@property (nonatomic,readonly) NSExtension * extension; 
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) id requestInterruptionBlock;                 //@synthesize requestInterruptionBlock=_requestInterruptionBlock - In the implementation block
+(id)sharedExtensionQueue;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)requestInterruptionBlock;
-(void)setRequestInterruptionBlock:(id)arg1 ;
-(NSUUID *)sessionID;
-(void)setSessionID:(NSUUID *)arg1 ;
-(NSExtension *)extension;
-(id)remoteInterface;
-(id)_loadExtensionForIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadExtension:(id*)arg1 ;
-(BOOL)_setupSessionIfNeeded:(id*)arg1 ;
-(id)_hostContextForExtension:(id)arg1 ;
-(void)_terminate;
-(id)initWithFollowUp:(id)arg1 andDelegate:(id)arg2 ;
@end

