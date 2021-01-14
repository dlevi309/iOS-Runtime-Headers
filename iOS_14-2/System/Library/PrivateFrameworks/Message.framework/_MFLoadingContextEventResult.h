/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EFInvocable;
@class NSURL, NSArray;

@interface _MFLoadingContextEventResult : NSObject {

	NSURL* _contentURL;
	NSArray* _relatedContentItems;
	id<EFInvocable> _cleanupInvocable;
	NSURL* _publicMessageURL;

}

@property (nonatomic,retain) NSURL * contentURL;                            //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,retain) NSArray * relatedContentItems;                 //@synthesize relatedContentItems=_relatedContentItems - In the implementation block
@property (nonatomic,retain) id<EFInvocable> cleanupInvocable;              //@synthesize cleanupInvocable=_cleanupInvocable - In the implementation block
@property (nonatomic,retain) NSURL * publicMessageURL;                      //@synthesize publicMessageURL=_publicMessageURL - In the implementation block
-(NSURL *)contentURL;
-(NSArray *)relatedContentItems;
-(void)setRelatedContentItems:(NSArray *)arg1 ;
-(id<EFInvocable>)cleanupInvocable;
-(void)setCleanupInvocable:(id<EFInvocable>)arg1 ;
-(NSURL *)publicMessageURL;
-(void)setPublicMessageURL:(NSURL *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
@end

