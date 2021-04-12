/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <RemoteTextInput/RTIDataPayload.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTIDocumentTraits, RTIDocumentState, RTITextOperations, NSUUID;

@interface RTIInputSystemDataPayload : RTIDataPayload <NSSecureCoding> {

	BOOL _disableUpdate;
	RTIDocumentTraits* _documentTraits;
	RTIDocumentState* _documentState;
	RTITextOperations* _textOperations;
	NSUUID* _sessionUUID;

}

@property (nonatomic,retain) RTIDocumentTraits * documentTraits;              //@synthesize documentTraits=_documentTraits - In the implementation block
@property (nonatomic,retain) RTIDocumentState * documentState;                //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) RTITextOperations * textOperations;              //@synthesize textOperations=_textOperations - In the implementation block
@property (nonatomic,retain) NSUUID * sessionUUID;                            //@synthesize sessionUUID=_sessionUUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)payloadWithData:(id)arg1 version:(unsigned long long)arg2 ;
+(id)payloadWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(RTIDocumentState *)documentState;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(RTIDocumentTraits *)documentTraits;
-(RTITextOperations *)textOperations;
-(void)setTextOperations:(RTITextOperations *)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(void)updateData;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
-(void)_unarchiveData;
@end

