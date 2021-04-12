/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSMutableDictionary, NSString;

@interface SKNodeCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {

	NSMutableDictionary* _cache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)_currentAppModuleName;
-(id)_mangledSwiftClassName:(id)arg1 moduleName:(id)arg2 ;
-(id)_findValidClassName:(id)arg1 ;
@end

