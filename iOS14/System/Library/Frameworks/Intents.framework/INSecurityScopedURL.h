/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


#import <Intents/Intents-Structs.h>
@class NSURL;

@interface INSecurityScopedURL : NSObject {

	long long _accessCount;
	os_unfair_lock_s _lock;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
-(void)stopAccessingSecurityScopedResource;
-(BOOL)startAccessingSecurityScopedResource;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
@end

