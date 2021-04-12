/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMKeyValueCollectionStorage.h>

@class NSString;

@interface IMKeyValueCollectionUserDefaultsStorage : NSObject <IMKeyValueCollectionStorage> {

	NSString* _domain;

}

@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDomain:(id)arg1 ;
-(id)_actuallyReadObjectForKey:(id)arg1 ;
-(id)setWithMutableClassIfApplicableFor:(Class)arg1 ;
-(id)_decodeData:(id)arg1 forKey:(id)arg2 ;
-(void)_actuallyWriteObject:(id)arg1 forKey:(id)arg2 ;
@end

