/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/


@class NSMutableDictionary;

@interface DCDispatchAfterHandler : NSObject {

	NSMutableDictionary* _identifierBlockMap;

}

@property (nonatomic,retain) NSMutableDictionary * identifierBlockMap;              //@synthesize identifierBlockMap=_identifierBlockMap - In the implementation block
+(id)appLifeCycleHandler;
-(id)init;
-(void)cancelAll;
-(void)setIdentifierBlockMap:(NSMutableDictionary *)arg1 ;
-(id)identifierForStringIdentifier:(id)arg1 ;
-(NSMutableDictionary *)identifierBlockMap;
-(void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)cancelBlocksWithStringIdentifier:(id)arg1 ;
@end

