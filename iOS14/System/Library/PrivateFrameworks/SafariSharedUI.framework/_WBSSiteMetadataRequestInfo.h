/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSSiteMetadataProvider;
@class NSMutableSet, NSOperation;

@interface _WBSSiteMetadataRequestInfo : NSObject {

	id<WBSSiteMetadataProvider> _provider;
	NSMutableSet* _tokens;
	NSOperation* _operation;

}

@property (nonatomic,readonly) id<WBSSiteMetadataProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSMutableSet * tokens;                             //@synthesize tokens=_tokens - In the implementation block
@property (assign,nonatomic,__weak) NSOperation * operation;                      //@synthesize operation=_operation - In the implementation block
-(NSMutableSet *)tokens;
-(id)initWithProvider:(id)arg1 ;
-(void)setOperation:(NSOperation *)arg1 ;
-(NSOperation *)operation;
-(id<WBSSiteMetadataProvider>)provider;
-(void)dealloc;
@end

