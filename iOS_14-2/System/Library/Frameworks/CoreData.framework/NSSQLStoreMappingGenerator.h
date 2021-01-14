/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {

	NSMutableDictionary* _names;

}
+(void)invalidate;
+(id)defaultMappingGenerator;
-(id)init;
-(id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned long long)arg2 ;
-(id)uniqueNameWithBase:(id)arg1 ;
-(id)generateTableName:(id)arg1 isAncillary:(BOOL)arg2 ;
-(id)newGeneratedPropertyName:(id)arg1 ;
-(void)dealloc;
@end

