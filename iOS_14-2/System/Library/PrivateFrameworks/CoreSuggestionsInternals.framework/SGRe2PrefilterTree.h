/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSData;

@interface SGRe2PrefilterTree : NSObject {

	NSData* _data;
	const unsigned short* _rpns;
	const unsigned short* _h1;
	const unsigned short* _h2;
	const unsigned short* _h3;
	const char* _s1;
	const char* _s2;
	const char* _s3;
	unsigned short _nrpns;
	unsigned short _n1;
	unsigned short _n2;
	unsigned short _n3;

}
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)regexpIdsThatMightMatchUtf8:(const char*)arg1 ;
@end

