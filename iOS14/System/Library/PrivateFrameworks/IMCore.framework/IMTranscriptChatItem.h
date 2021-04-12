/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) BOOL wantsTail; 
@property (nonatomic,copy,readonly) NSAttributedString * transcriptText; 
@property (nonatomic,readonly) NSDate * transcriptDate; 
@property (nonatomic,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) IMHandle * handle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)__ck_chatItemClass;
-(NSString *)guid;
-(NSAttributedString *)transcriptText;
-(IMHandle *)handle;
-(unsigned char)attachmentContiguousType;
-(NSString *)description;
-(unsigned char)contiguousType;
-(BOOL)isContiguous;
-(BOOL)isFromMe;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(IMServiceImpl *)service;
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

