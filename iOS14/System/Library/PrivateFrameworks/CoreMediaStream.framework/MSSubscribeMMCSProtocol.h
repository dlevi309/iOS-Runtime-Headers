/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSMMCSProtocol.h>
#import <libobjc.A.dylib/MSSubscribeStorageProtocol.h>

@protocol MSSubscribeStorageProtocolDelegate;
@class NSMutableDictionary, NSString;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol> {

	id<MSSubscribeStorageProtocolDelegate> _delegate;
	unsigned long long _itemCount;
	NSMutableDictionary* _itemIDToAssetDict;
	unsigned long long* _itemIDs;
	const char** _signatures;
	char** _authTokens;

}

@property (assign,nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MSSubscribeStorageProtocolDelegate>)delegate;
-(void)deactivate;
-(void)setDelegate:(id<MSSubscribeStorageProtocolDelegate>)arg1 ;
-(void)dealloc;
-(void)retrieveAssets:(id)arg1 ;
-(void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
-(id)initWithPersonID:(id)arg1 ;
-(void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg1 ;
@end

