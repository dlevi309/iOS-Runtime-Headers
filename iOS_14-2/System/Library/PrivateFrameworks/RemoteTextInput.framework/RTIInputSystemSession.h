/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RTIDocumentState *)documentState;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(NSUUID *)uuid;
-(id<RTIInputSystemSessionDelegate>)sessionDelegate;
-(void)setSessionDelegate:(id<RTIInputSystemSessionDelegate>)arg1 ;
-(RTIDocumentTraits *)documentTraits;
-(void)flushOperations;
-(RTITextOperations *)textOperations;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)addSessionDelegate:(id)arg1 ;
-(void)setTextOperations:(RTITextOperations *)arg1 ;
-(void)_applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2 ;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
-(RTITextOperations *)_textOperations;
-(void)enumerateSessionDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)_createTextOperationsIfNecessary;
-(void)applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2 ;
-(void)removeSessionDelegate:(id)arg1 ;
-(NSHashTable *)extraSessionDelegates;
-(void)setExtraSessionDelegates:(NSHashTable *)arg1 ;
@end

