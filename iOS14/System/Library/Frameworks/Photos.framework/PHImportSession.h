/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSString;

@interface PHImportSession : PHAssetCollection {

	NSString* _importSessionID;

}

@property (nonatomic,readonly) NSString * importSessionID;              //@synthesize importSessionID=_importSessionID - In the implementation block
+(id)entityKeyMap;
+(id)identifierCode;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchImportSessionsWithOptions:(id)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(id)localizedTitle;
-(NSString *)importSessionID;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(id)description;
@end

