/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVAssetCustomURLRequest : NSObject {

	unsigned long long _requestID;
	CFDictionaryRef _customURLRequest;
	CFDictionaryRef _customURLResponse;

}

@property (nonatomic,readonly) unsigned long long requestID;              //@synthesize requestID=_requestID - In the implementation block
+(id)requestWithRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)requestID;
-(id)initWithRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 ;
-(CFDictionaryRef)customURLRequest;
-(void)setCustomURLRequest:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)customURLResponse;
-(void)setCustomURLResponse:(CFDictionaryRef)arg1 ;
@end

