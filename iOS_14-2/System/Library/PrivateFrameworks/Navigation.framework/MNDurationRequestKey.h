/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VSSpeechRequest;

@interface MNDurationRequestKey : NSObject <NSCopying> {

	VSSpeechRequest* _speechRequest;

}

@property (nonatomic,readonly) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
-(VSSpeechRequest *)speechRequest;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSpeechRequest:(id)arg1 ;
@end

