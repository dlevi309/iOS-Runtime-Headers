/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIAppDocumentUpdateContext.h>

@class IKUpdateServiceRequest, NSArray, NSMutableOrderedSet, NSString;

@interface VUIAppDocumentAutomaticUpdateContext : NSObject <VUIAppDocumentUpdateContext> {

	IKUpdateServiceRequest* _currentUpdateRequest;
	NSArray* _receivedEvents;
	NSMutableOrderedSet* _remainingViewElements;

}

@property (nonatomic,retain) IKUpdateServiceRequest * currentUpdateRequest;              //@synthesize currentUpdateRequest=_currentUpdateRequest - In the implementation block
@property (nonatomic,copy) NSArray * receivedEvents;                                     //@synthesize receivedEvents=_receivedEvents - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * remainingViewElements;                //@synthesize remainingViewElements=_remainingViewElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)receivedEvents;
-(void)setReceivedEvents:(NSArray *)arg1 ;
-(NSMutableOrderedSet *)remainingViewElements;
-(id)_documentUpdateRequestForViewElement:(id)arg1 appContext:(id)arg2 documentRef:(id)arg3 ;
-(void)setCurrentUpdateRequest:(IKUpdateServiceRequest *)arg1 ;
-(void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2 ;
-(void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2 ;
-(IKUpdateServiceRequest *)currentUpdateRequest;
-(id)initWithEvents:(id)arg1 viewElements:(id)arg2 ;
-(void)setRemainingViewElements:(NSMutableOrderedSet *)arg1 ;
@end

