/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class NSRegularExpression, AXMSpeechFormatterCache;

@interface AXMDataDetector : NSObject {

	NSRegularExpression* _emailAddressRegex;
	AXMSpeechFormatterCache* _speechFormatterCache;

}
-(void)_enumerateText:(id)arg1 textCheckingType:(unsigned long long)arg2 datatype:(unsigned long long)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)emailAddressRegex;
-(void)_enumerateText:(id)arg1 regularExpression:(id)arg2 datatype:(unsigned long long)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)initWithSpeechFormatterCache:(id)arg1 ;
-(void)enumerateText:(id)arg1 searchingFordatatypes:(id)arg2 withBlock:(/*^block*/id)arg3 ;
@end

