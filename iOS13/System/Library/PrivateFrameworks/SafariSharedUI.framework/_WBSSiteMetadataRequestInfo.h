/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(id<WBSSiteMetadataProvider>)provider;
-(NSMutableSet *)tokens;
-(id)initWithProvider:(id)arg1 ;
@end

