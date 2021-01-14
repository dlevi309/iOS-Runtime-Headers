/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerForNotifications:(id)arg1 ;
-(id)fetchDataDictionaryForKeyPath:(id)arg1 ;
-(id)fetchContextValueForKeyPath:(id)arg1 ;
@end

