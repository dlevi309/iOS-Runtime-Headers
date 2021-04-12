/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)plugInClasses;
+(BOOL)canHandleURLComponents:(id)arg1 ;
-(_LSAppLinkOpenState *)state;
-(NSURLComponents *)URLComponents;
-(unsigned long long)limit;
-(void)setURLComponents:(NSURLComponents *)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)setState:(_LSAppLinkOpenState *)arg1 ;
-(id)appLinksWithContext:(LSContext*)arg1 error:(id*)arg2 ;
@end

