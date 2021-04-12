/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable, NSNumber;

@interface QLItemFetcher : NSObject <NSSecureCoding> {

	NSMapTable* _observersToBlocks;
	long long _fetchingState;

}

@property (assign,nonatomic) long long fetchingState;              //@synthesize fetchingState=_fetchingState - In the implementation block
@property (readonly) NSNumber * itemSize; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)itemSize;
-(void)unregisterObserver:(id)arg1 ;
-(void)_notifyObservers;
-(id)shareableItem;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setFetchingState:(long long)arg1 ;
-(long long)fetchingState;
-(void)prepareShareableItem:(/*^block*/id)arg1 ;
-(id)fetchedContent;
-(id)newItemProvider;
-(BOOL)canBeCanceled;
-(void)cancelFetch;
-(void)registerObserver:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

