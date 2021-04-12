/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol _CDLocalContext;
@interface ATXCoreDuetContextHelper : NSObject {

	id<_CDLocalContext> _context;

}

@property (nonatomic,retain) id<_CDLocalContext> context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(id<_CDLocalContext>)context;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(id)fetchDataDictionaryForKeyPath:(id)arg1 ;
@end

