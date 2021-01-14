/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HSRequest.h>

@interface HSItemsRequest : HSRequest {

	BOOL _shouldParseResponse;
	BOOL _includeHiddenItems;

}

@property (assign,nonatomic) BOOL shouldParseResponse;              //@synthesize shouldParseResponse=_shouldParseResponse - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenItems;               //@synthesize includeHiddenItems=_includeHiddenItems - In the implementation block
+(id)requestWithDatabaseID:(unsigned)arg1 ;
+(id)requestWithDatabaseID:(unsigned)arg1 containerID:(unsigned)arg2 ;
-(id)initWithAction:(id)arg1 ;
-(double)timeoutInterval;
-(id)initWithDatabaseID:(unsigned)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 containerID:(unsigned)arg2 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(BOOL)shouldParseResponse;
-(void)setShouldParseResponse:(BOOL)arg1 ;
-(BOOL)includeHiddenItems;
-(void)setIncludeHiddenItems:(BOOL)arg1 ;
@end

