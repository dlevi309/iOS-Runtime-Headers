/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@class NSMutableDictionary, NSLock, NSBundle;

@interface CATLocalizationHelper : NSObject {

	NSMutableDictionary* mStringByKeyByTableName;
	NSLock* mLock;
	NSBundle* _bundle;

}

@property (nonatomic,__weak,readonly) NSBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
+(id)helperForBundle:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)stringByKeyForTableName:(id)arg1 ;
@end

