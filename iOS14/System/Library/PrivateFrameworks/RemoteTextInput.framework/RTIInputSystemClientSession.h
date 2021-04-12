/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/


@class RTIDocumentTraits, RTIDocumentState;

@interface RTIInputSystemClientSession : NSObject {

	RTIDocumentTraits* _documentTraits;
	RTIDocumentState* _documentState;

}

@property (nonatomic,retain) RTIDocumentTraits * documentTraits;              //@synthesize documentTraits=_documentTraits - In the implementation block
@property (nonatomic,retain) RTIDocumentState * documentState;                //@synthesize documentState=_documentState - In the implementation block
-(RTIDocumentState *)documentState;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(RTIDocumentTraits *)documentTraits;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
@end

