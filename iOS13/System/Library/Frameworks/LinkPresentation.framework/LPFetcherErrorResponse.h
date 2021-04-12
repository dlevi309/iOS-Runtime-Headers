/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class NSError;

@interface LPFetcherErrorResponse : LPFetcherResponse {

	NSError* _error;

}

@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(id)initWithError:(id)arg1 fetcher:(id)arg2 ;
@end

