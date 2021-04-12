/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _BlastDoorLPLinkMetadata;

@interface _BlastDoorLPMessagesPayload : NSObject <NSSecureCoding> {

	BOOL _placeholder;
	BOOL _needsSubresourceFetch;
	BOOL _needsCompleteFetch;
	_BlastDoorLPLinkMetadata* _metadata;

}

@property (nonatomic,copy) _BlastDoorLPLinkMetadata * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL needsSubresourceFetch;                         //@synthesize needsSubresourceFetch=_needsSubresourceFetch - In the implementation block
@property (assign,nonatomic) BOOL needsCompleteFetch;                            //@synthesize needsCompleteFetch=_needsCompleteFetch - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)linkWithDataRepresentation:(id)arg1 attachments:(id)arg2 ;
-(BOOL)isPlaceholder;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(_BlastDoorLPLinkMetadata *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)setNeedsSubresourceFetch:(BOOL)arg1 ;
-(void)setNeedsCompleteFetch:(BOOL)arg1 ;
-(BOOL)needsCompleteFetch;
-(BOOL)_needsWorkaroundForAppStoreTransformerCrash;
-(id)dataRepresentationWithOutOfLineAttachments:(id*)arg1 ;
-(BOOL)needsSubresourceFetch;
-(id)initWithCoder:(id)arg1 ;
-(_BlastDoorLPLinkMetadata *)metadata;
@end

