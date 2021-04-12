/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/


@protocol _CDLocalContext;
@interface PMMContextHelper : NSObject {

	id<_CDLocalContext> _context;

}

@property (nonatomic,readonly) id<_CDLocalContext> context;              //@synthesize context=_context - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<_CDLocalContext>)context;
-(id)fetchContextValueForKeyPath:(id)arg1 ;
-(void)registerForNotifications:(id)arg1 ;
-(id)fetchDataDictionaryForKeyPath:(id)arg1 ;
@end

