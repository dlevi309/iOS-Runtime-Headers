/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSMutableDictionary;

@interface FPItemToURLResourcesConverter : NSObject {

	NSMutableDictionary* _gettersByURLKey;
	NSMutableDictionary* _typesByURLKey;

}
+(id)dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2 ;
-(void)_addHelperMethodsToClass:(Class)arg1 ;
-(void)_cacheImplementedPropertiesForClass:(Class)arg1 ;
-(void)_addMethod:(SEL)arg1 toClass:(Class)arg2 ;
-(id)initWithItemClass:(Class)arg1 ;
-(id)_dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2 ;
@end

