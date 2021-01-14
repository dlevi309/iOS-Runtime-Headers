/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@class NSMutableDictionary, NSMutableArray;

@interface ECRawMessageHeaders : NSObject {

	NSMutableDictionary* _headers;
	NSMutableArray* _orderedHeaders;

}
-(id)allHeaderKeys;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)headersForKey:(id)arg1 ;
-(id)initWithHeaderString:(id)arg1 ;
-(id)allHeaders;
@end

