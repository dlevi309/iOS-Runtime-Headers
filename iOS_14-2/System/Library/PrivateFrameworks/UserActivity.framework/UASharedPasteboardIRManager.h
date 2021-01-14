/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/


@class NSMutableDictionary;

@interface UASharedPasteboardIRManager : NSObject {

	NSMutableDictionary* _lookupTable;

}

@property (retain) NSMutableDictionary * lookupTable;              //@synthesize lookupTable=_lookupTable - In the implementation block
+(id)sharedIRManager;
-(id)init;
-(void)registerIRHandlerClass:(Class)arg1 forType:(id)arg2 ;
-(id)converterForType:(id)arg1 ;
-(void)initializeConverters;
-(id)registeredConverters;
-(void)setLookupTable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lookupTable;
@end

