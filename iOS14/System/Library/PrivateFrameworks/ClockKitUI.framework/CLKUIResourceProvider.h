/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


@protocol CLKUIResourceProviderDelegate;
@class NSMutableSet, NSNumber, NSSet;

@interface CLKUIResourceProvider : NSObject {

	NSMutableSet* _uuidHistory;
	id<CLKUIResourceProviderDelegate> _delegate;
	NSNumber* _key;

}

@property (nonatomic,__weak,readonly) id<CLKUIResourceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * uuidHistory;                                            //@synthesize uuidHistory=_uuidHistory - In the implementation block
@property (nonatomic,readonly) NSNumber * key;                                                 //@synthesize key=_key - In the implementation block
-(id<CLKUIResourceProviderDelegate>)delegate;
-(NSNumber *)key;
-(id)initWithDelegate:(id)arg1 key:(id)arg2 ;
-(void)addUuidToHistory:(id)arg1 ;
-(NSSet *)uuidHistory;
@end

