/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@class NSURL;

@interface HMFCache : HMFObject {

	BOOL _exists;
	NSURL* _URL;

}

@property (copy,readonly) NSURL * URL;                         //@synthesize URL=_URL - In the implementation block
@property (getter=isExists,readonly) BOOL exists;              //@synthesize exists=_exists - In the implementation block
+(id)defaultCache;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(NSURL *)URL;
-(BOOL)isExists;
@end

