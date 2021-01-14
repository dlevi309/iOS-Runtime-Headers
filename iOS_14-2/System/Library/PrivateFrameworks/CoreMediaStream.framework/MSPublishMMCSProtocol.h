/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSMMCSProtocol.h>
#import <libobjc.A.dylib/MSPublishStorageProtocol.h>

@protocol MSPublishStorageProtocolDelegate;
@class NSMutableDictionary, NSString;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {

	id<MSPublishStorageProtocolDelegate> _delegate;
	NSMutableDictionary* _itemIDToAssetDict;
	unsigned long long* _itemIDs;
	const char** _signatures;
	char** _authTokens;
	unsigned* _itemFlags;
	long long _itemsInFlight;

}

@property (assign,nonatomic) id<MSPublishStorageProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MSPublishStorageProtocolDelegate>)delegate;
-(void)deactivate;
-(void)setDelegate:(id<MSPublishStorageProtocolDelegate>)arg1 ;
-(void)dealloc;
-(void)computeHashForAsset:(id)arg1 ;
-(int)_getFileDescriptorFromItem:(unsigned long long)arg1 ;
-(id)_getUTIFromItem:(unsigned long long)arg1 ;
-(void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
-(void)publishAssets:(id)arg1 URL:(id)arg2 ;
-(id)initWithPersonID:(id)arg1 ;
-(void)_putItemsFailure;
@end

