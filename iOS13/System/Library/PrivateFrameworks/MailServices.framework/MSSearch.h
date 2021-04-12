/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSXPCService.h>
#import <libobjc.A.dylib/MSDSearchResultsProtocol.h>

@protocol MSSearchDelegate;
@class NSString;

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol> {

	id<MSSearchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 delegate:(id)arg5 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 onlyInboxes:(BOOL)arg5 delegate:(id)arg6 ;
+(void)setUnitTestingResultsArray:(id)arg1 ;
-(id<MSSearchDelegate>)delegate;
-(void)setDelegate:(id<MSSearchDelegate>)arg1 ;
-(void)cancel;
-(id)_initWithDelegate:(id)arg1 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 ;
-(void)foundResults:(id)arg1 error:(id)arg2 ;
-(void)_delegateDidFinishWithError:(id)arg1 ;
-(void)_delegateDidFindResults:(id)arg1 ;
-(BOOL)_unitTestsAreEnabled;
-(id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg1 ;
@end

