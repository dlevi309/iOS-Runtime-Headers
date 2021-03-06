/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/_HMTelevisionProfileDelegate.h>

@protocol HMTelevisionProfileDelegate;
@class NSArray, NSString;

@interface HMTelevisionProfile : HMAccessoryProfile <_HMTelevisionProfileDelegate> {

	id<HMTelevisionProfileDelegate> _delegate;

}

@property (readonly) NSArray * mediaSourceDisplayOrder; 
@property (readonly) BOOL mediaSourceDisplayOrderModifiable; 
@property (__weak) id<HMTelevisionProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMTelevisionProfileDelegate>)delegate;
-(void)setDelegate:(id<HMTelevisionProfileDelegate>)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2 ;
-(NSArray *)mediaSourceDisplayOrder;
-(BOOL)mediaSourceDisplayOrderModifiable;
-(void)televisionProfileDidUpdateSourceDisplayOrder:(id)arg1 ;
-(void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

