/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class NSError;

@interface LPFetcherErrorResponse : LPFetcherResponse {

	NSError* _error;

}

@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithError:(id)arg1 fetcher:(id)arg2 ;
-(NSError *)error;
@end

