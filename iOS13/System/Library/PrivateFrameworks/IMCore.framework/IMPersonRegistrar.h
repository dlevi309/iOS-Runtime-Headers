/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject {

	NSMutableDictionary* _personMap;

}

@property (retain) NSMutableDictionary * _personMap;              //@synthesize personMap=_personMap - In the implementation block
+(id)sharedInstance;
-(void)registerPerson:(id)arg1 ;
-(void)unregisterPerson:(id)arg1 ;
-(id)personForUniqueID:(id)arg1 ;
-(void)_dumpAllPersons;
-(NSMutableDictionary *)_personMap;
-(void)set_personMap:(NSMutableDictionary *)arg1 ;
@end

