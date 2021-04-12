/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MSPublishStorageProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<MSPublishStorageProtocolDelegate>)delegate;
-(void)setDelegate:(id<MSPublishStorageProtocolDelegate>)arg1 ;
-(void)deactivate;
-(void)computeHashForAsset:(id)arg1 ;
-(int)_getFileDescriptorFromItem:(unsigned long long)arg1 ;
-(id)_getUTIFromItem:(unsigned long long)arg1 ;
-(void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
-(void)publishAssets:(id)arg1 URL:(id)arg2 ;
-(id)initWithPersonID:(id)arg1 ;
-(void)_putItemsFailure;
@end

