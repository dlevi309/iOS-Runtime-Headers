/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <CFNetwork/NSURLProtocol.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EFCancelable;
@class EFPromise, EMContentRepresentation, NSString;

@interface MFMessageURLProtocol : NSURLProtocol <EFLoggable> {

	id<EFCancelable> _cancelable;
	EFPromise* _promise;
	EMContentRepresentation* _contentRepresentation;

}

@property (nonatomic,retain) id<EFCancelable> cancelable;                                  //@synthesize cancelable=_cancelable - In the implementation block
@property (nonatomic,retain) EFPromise * promise;                                          //@synthesize promise=_promise - In the implementation block
@property (nonatomic,retain) EMContentRepresentation * contentRepresentation;              //@synthesize contentRepresentation=_contentRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)log;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerContentRepresentation:(id)arg1 ;
+(id)contentRepresentationForURL:(id)arg1 ;
+(id)registry;
+(void)setRegistry:(id)arg1 ;
-(void)dealloc;
-(EFPromise *)promise;
-(void)setPromise:(EFPromise *)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id<EFCancelable>)cancelable;
-(void)setCancelable:(id<EFCancelable>)arg1 ;
-(id)_cachedResponseWithData:(id)arg1 mimeType:(id)arg2 error:(id*)arg3 ;
-(EMContentRepresentation *)contentRepresentation;
-(void)setContentRepresentation:(EMContentRepresentation *)arg1 ;
@end

