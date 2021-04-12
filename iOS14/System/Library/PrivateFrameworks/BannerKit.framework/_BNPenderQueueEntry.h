/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/


@protocol BNPending;
@class NSUUID;

@interface _BNPenderQueueEntry : NSObject {

	id<BNPending> _pender;
	NSUUID* _entryIdentifier;

}

@property (nonatomic,readonly) id<BNPending> pender;                  //@synthesize pender=_pender - In the implementation block
@property (nonatomic,readonly) NSUUID * entryIdentifier;              //@synthesize entryIdentifier=_entryIdentifier - In the implementation block
-(id<BNPending>)pender;
-(id)initWithPender:(id)arg1 ;
-(NSUUID *)entryIdentifier;
@end

