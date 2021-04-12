/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/


@protocol RTIInputSystemSessionDelegate;
@class NSUUID, RTIDocumentTraits, RTIDocumentState, RTITextOperations, NSHashTable;

@interface RTIInputSystemSession : NSObject {

	NSUUID* _uuid;
	RTIDocumentTraits* _documentTraits;
	RTIDocumentState* _documentState;
	RTITextOperations* _textOperations;
	NSHashTable* _extraSessionDelegates;
	id<RTIInputSystemSessionDelegate> _sessionDelegate;

}

@property (nonatomic,retain) NSHashTable * extraSessionDelegates;                                   //@synthesize extraSessionDelegates=_extraSessionDelegates - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) RTIDocumentTraits * documentTraits;                                    //@synthesize documentTraits=_documentTraits - In the implementation block
@property (nonatomic,retain) RTIDocumentState * documentState;                                      //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) RTITextOperations * textOperations;                                    //@synthesize textOperations=_textOperations - In the implementation block
@property (nonatomic,readonly) RTITextOperations * _textOperations; 
@property (assign,nonatomic,__weak) id<RTIInputSystemSessionDelegate> sessionDelegate;              //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(RTIDocumentState *)documentState;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(RTIDocumentTraits *)documentTraits;
-(void)setSessionDelegate:(id<RTIInputSystemSessionDelegate>)arg1 ;
-(RTITextOperations *)textOperations;
-(void)flushOperations;
-(void)setTextOperations:(RTITextOperations *)arg1 ;
-(id<RTIInputSystemSessionDelegate>)sessionDelegate;
-(void)_applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2 ;
-(void)addSessionDelegate:(id)arg1 ;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
-(RTITextOperations *)_textOperations;
-(void)enumerateSessionDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)_createTextOperationsIfNecessary;
-(void)applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2 ;
-(void)removeSessionDelegate:(id)arg1 ;
-(NSHashTable *)extraSessionDelegates;
-(void)setExtraSessionDelegates:(NSHashTable *)arg1 ;
@end

