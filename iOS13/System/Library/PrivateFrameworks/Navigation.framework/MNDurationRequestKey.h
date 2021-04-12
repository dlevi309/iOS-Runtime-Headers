/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VSSpeechRequest;

@interface MNDurationRequestKey : NSObject <NSCopying> {

	VSSpeechRequest* _speechRequest;

}

@property (nonatomic,readonly) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(id)initWithSpeechRequest:(id)arg1 ;
@end

