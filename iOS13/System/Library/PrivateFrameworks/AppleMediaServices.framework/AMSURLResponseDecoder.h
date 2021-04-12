/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSResponseDecoding.h>

@class NSIndexSet, NSSet;

@interface AMSURLResponseDecoder : NSObject <AMSResponseDecoding> {

	NSIndexSet* _allowedStatusCodes;
	NSSet* _allowedContentTypes;

}

@property (nonatomic,copy) NSIndexSet * allowedStatusCodes;              //@synthesize allowedStatusCodes=_allowedStatusCodes - In the implementation block
@property (nonatomic,copy) NSSet * allowedContentTypes;                  //@synthesize allowedContentTypes=_allowedContentTypes - In the implementation block
-(id)init;
-(NSSet *)allowedContentTypes;
-(void)setAllowedStatusCodes:(NSIndexSet *)arg1 ;
-(id)resultFromResult:(id)arg1 error:(id*)arg2 ;
-(NSIndexSet *)allowedStatusCodes;
-(void)setAllowedContentTypes:(NSSet *)arg1 ;
@end

