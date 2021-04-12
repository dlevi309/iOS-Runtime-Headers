/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAllowedContentTypes:(NSSet *)arg1 ;
-(id)resultFromResult:(id)arg1 error:(id*)arg2 ;
-(NSSet *)allowedContentTypes;
-(NSIndexSet *)allowedStatusCodes;
-(void)setAllowedStatusCodes:(NSIndexSet *)arg1 ;
@end

