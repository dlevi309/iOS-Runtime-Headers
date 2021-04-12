/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/FLViewModel.h>

@class NSArray, NSSet, FLFollowUpController, FLItemChangeObserver, NSString;

@interface FLItemDetailViewModel : NSObject <FLViewModel> {

	NSArray* _originalItems;
	NSSet* _originalItemIdentifiers;
	FLFollowUpController* _controller;
	FLItemChangeObserver* _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItems:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)allPendingItems;
-(void)setItemChangeHandler:(/*^block*/id)arg1 ;
@end

