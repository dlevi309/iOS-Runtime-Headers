/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)payloadWithData:(id)arg1 ;
+(id)payloadWithData:(id)arg1 version:(unsigned long long)arg2 ;
-(RTIDocumentState *)documentState;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSUUID *)sessionUUID;
-(RTIDocumentTraits *)documentTraits;
-(RTITextOperations *)textOperations;
-(id)data;
-(void)updateData;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextOperations:(RTITextOperations *)arg1 ;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
-(void)_unarchiveData;
@end

