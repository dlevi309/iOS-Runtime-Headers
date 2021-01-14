/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)stringByKeyForTableName:(id)arg1 ;
@end

