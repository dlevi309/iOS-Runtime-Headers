/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@protocol LPMetadataProviderSpecializationDelegate;
@class LPMetadataProviderSpecializationContext, NSURL;

@interface LPMetadataProviderSpecialization : NSObject {

	id<LPMetadataProviderSpecializationDelegate> _delegate;
	LPMetadataProviderSpecializationContext* _context;

}

@property (assign,nonatomic,__weak) id<LPMetadataProviderSpecializationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) LPMetadataProviderSpecializationContext * context;                       //@synthesize context=_context - In the implementation block
+(id)specializedMetadataProviderForResourceWithContext:(id)arg1 ;
+(BOOL)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2 ;
+(unsigned long long)specialization;
-(id<LPMetadataProviderSpecializationDelegate>)delegate;
-(void)start;
-(id)initWithContext:(id)arg1 ;
-(LPMetadataProviderSpecializationContext *)context;
-(void)setDelegate:(id<LPMetadataProviderSpecializationDelegate>)arg1 ;
-(NSURL *)URL;
-(void)cancel;
@end

