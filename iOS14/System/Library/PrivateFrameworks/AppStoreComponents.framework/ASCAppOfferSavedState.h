/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class NSString, ASCOfferMetadata;

@interface ASCAppOfferSavedState : NSObject {

	NSString* _state;
	ASCOfferMetadata* _metadata;
	long long _flags;

}

@property (nonatomic,copy,readonly) NSString * state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) ASCOfferMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL isLoadingFullState; 
@property (nonatomic,readonly) BOOL isActionable; 
-(long long)flags;
-(BOOL)isActionable;
-(NSString *)state;
-(ASCOfferMetadata *)metadata;
-(id)initWithState:(id)arg1 metadata:(id)arg2 flags:(long long)arg3 ;
-(BOOL)isLoadingFullState;
@end

