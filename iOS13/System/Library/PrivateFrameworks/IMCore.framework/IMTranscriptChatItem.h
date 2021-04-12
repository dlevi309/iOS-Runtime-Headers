/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMChatItem.h>
#import <IMCore/IMChatTranscriptItem.h>

@class NSAttributedString, NSDate, IMServiceImpl, IMHandle, NSString;

@interface IMTranscriptChatItem : IMChatItem <IMChatTranscriptItem> {

	NSString* _guid;
	unsigned char _contiguousType;
	unsigned char _attachmentContiguousType;
	unsigned _contiguousLoaded : 1;

}

@property (setter=_setGUID:,nonatomic,copy) NSString * guid;                          //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned char contiguousType; 
@property (nonatomic,readonly) unsigned char attachmentContiguousType; 
@property (getter=isContiguous,nonatomic,readonly) BOOL contiguous; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) BOOL wantsTail; 
@property (nonatomic,copy,readonly) NSAttributedString * transcriptText; 
@property (nonatomic,readonly) NSDate * transcriptDate; 
@property (nonatomic,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) IMHandle * handle; 
-(Class)__ck_chatItemClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)handle;
-(IMServiceImpl *)service;
-(BOOL)isContiguous;
-(NSString *)guid;
-(BOOL)isFromMe;
-(NSAttributedString *)transcriptText;
-(unsigned char)contiguousType;
-(unsigned char)attachmentContiguousType;
-(BOOL)wantsTail;
-(NSDate *)transcriptDate;
-(BOOL)isContiguousWithChatItem:(id)arg1 ;
-(BOOL)isAttachmentContiguousWithChatItem:(id)arg1 ;
-(BOOL)_isContiguousLoaded;
-(void)_setContiguousLoaded:(BOOL)arg1 ;
-(void)_setContiguousType:(unsigned char)arg1 ;
-(void)_setAttachmentContiguousType:(unsigned char)arg1 ;
-(void)_setGUID:(id)arg1 ;
@end

