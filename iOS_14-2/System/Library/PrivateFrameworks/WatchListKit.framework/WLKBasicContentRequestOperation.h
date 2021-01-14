/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, WLKBasicContentRequestResponse, WLKBasicContentMetadata;

@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation {

	NSArray* _contentIDs;
	WLKBasicContentRequestResponse* _response;

}

@property (nonatomic,copy,readonly) NSArray * contentIDs;                                   //@synthesize contentIDs=_contentIDs - In the implementation block
@property (nonatomic,readonly) WLKBasicContentRequestResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * basicContentMetadata; 
-(WLKBasicContentRequestResponse *)response;
-(void)processResponse;
-(id)initWithContentIDs:(id)arg1 caller:(id)arg2 ;
-(id)initWithContentID:(id)arg1 caller:(id)arg2 ;
-(WLKBasicContentMetadata *)basicContentMetadata;
-(NSArray *)contentIDs;
@end

