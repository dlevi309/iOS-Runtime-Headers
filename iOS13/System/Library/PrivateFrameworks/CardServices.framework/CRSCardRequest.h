/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
*/

#import <CardServices/CRSRequest.h>
#import <libobjc.A.dylib/CRSCardRequesting.h>

@protocol OS_dispatch_queue, CRContent;
@class NSObject, NSSet, NSString;

@interface CRSCardRequest : CRSRequest <CRSCardRequesting> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _loadsBundleServices;
	id<CRContent> _content;
	unsigned long long _format;
	NSSet* _excludedServiceIdentifiers;

}

@property (setter=_setExcludedServiceIdentifiers:,getter=_excludedServiceIdentifiers,nonatomic,copy) NSSet * excludedServiceIdentifiers;              //@synthesize excludedServiceIdentifiers=_excludedServiceIdentifiers - In the implementation block
@property (nonatomic,retain) id<CRContent> content;                                                                                                   //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) unsigned long long format;                                                                                               //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL loadsBundleServices;                                                                                                //@synthesize loadsBundleServices=_loadsBundleServices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)registerService:(id)arg1 ;
-(id)init;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(id<CRContent>)content;
-(void)setContent:(id<CRContent>)arg1 ;
-(void)startWithReply:(/*^block*/id)arg1 ;
-(void)setLoadsBundleServices:(BOOL)arg1 ;
-(id)initWithContent:(id)arg1 format:(unsigned long long)arg2 ;
-(id)_excludedServiceIdentifiers;
-(void)_tryRemainingCardServices:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_loadAndRegisterBundleServices:(/*^block*/id)arg1 ;
-(BOOL)loadsBundleServices;
-(void)_setExcludedServiceIdentifiers:(id)arg1 ;
@end

