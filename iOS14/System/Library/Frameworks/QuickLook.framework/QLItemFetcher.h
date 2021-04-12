/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSNumber *)itemSize;
-(void)_notifyObservers;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)canBeCanceled;
-(void)cancelFetch;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setFetchingState:(long long)arg1 ;
-(long long)fetchingState;
-(void)prepareShareableItem:(/*^block*/id)arg1 ;
-(id)fetchedContent;
-(id)newItemProvider;
-(id)shareableItem;
@end

