/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)allPendingItems;
-(void)setItemChangeHandler:(/*^block*/id)arg1 ;
@end

