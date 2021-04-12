/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSDate, AAAbsintheContext;

@interface AAAbsintheSignerContextCache : NSObject {

	NSDate* _creationDate;
	AAAbsintheContext* _context;

}

@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) AAAbsintheContext * context;              //@synthesize context=_context - In the implementation block
+(id)cacheWithContext:(id)arg1 ;
-(id)init;
-(AAAbsintheContext *)context;
-(NSDate *)creationDate;
-(id)initWithContext:(id)arg1 ;
@end

