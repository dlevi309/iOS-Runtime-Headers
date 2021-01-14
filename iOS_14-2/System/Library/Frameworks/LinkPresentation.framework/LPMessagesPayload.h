/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata;

@interface LPMessagesPayload : NSObject <NSSecureCoding> {

	BOOL _placeholder;
	BOOL _needsSubresourceFetch;
	BOOL _needsCompleteFetch;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,copy) LPLinkMetadata * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL needsSubresourceFetch;                         //@synthesize needsSubresourceFetch=_needsSubresourceFetch - In the implementation block
@property (assign,nonatomic) BOOL needsCompleteFetch;                            //@synthesize needsCompleteFetch=_needsCompleteFetch - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_linkWithDataRepresentation:(id)arg1 substitutingAttachments:(BOOL)arg2 attachments:(id)arg3 ;
+(id)linkWithDataRepresentation:(id)arg1 attachments:(id)arg2 ;
+(id)linkWithDataRepresentationWithoutSubstitutingAttachments:(id)arg1 ;
-(BOOL)isPlaceholder;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)setNeedsSubresourceFetch:(BOOL)arg1 ;
-(void)setNeedsCompleteFetch:(BOOL)arg1 ;
-(BOOL)needsCompleteFetch;
-(BOOL)_needsWorkaroundForAppStoreTransformerCrash;
-(void)performSubstitutionWithAttachments:(id)arg1 ;
-(id)dataRepresentationWithOutOfLineAttachments:(id*)arg1 ;
-(BOOL)needsSubresourceFetch;
-(id)initWithCoder:(id)arg1 ;
-(LPLinkMetadata *)metadata;
@end

