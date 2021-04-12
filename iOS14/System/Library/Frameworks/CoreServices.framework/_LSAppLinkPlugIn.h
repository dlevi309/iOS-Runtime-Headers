/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSURLComponents, _LSAppLinkOpenState;

@interface _LSAppLinkPlugIn : NSObject {

	NSURLComponents* _URLComponents;
	unsigned long long _limit;
	_LSAppLinkOpenState* _state;

}

@property (retain) NSURLComponents * URLComponents;              //@synthesize URLComponents=_URLComponents - In the implementation block
@property (assign) unsigned long long limit;                     //@synthesize limit=_limit - In the implementation block
@property (retain) _LSAppLinkOpenState * state;                  //@synthesize state=_state - In the implementation block
+(id)plugInClasses;
+(BOOL)canHandleURLComponents:(id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setURLComponents:(NSURLComponents *)arg1 ;
-(unsigned long long)limit;
-(id)appLinksWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(NSURLComponents *)URLComponents;
-(void)setState:(_LSAppLinkOpenState *)arg1 ;
-(_LSAppLinkOpenState *)state;
@end

