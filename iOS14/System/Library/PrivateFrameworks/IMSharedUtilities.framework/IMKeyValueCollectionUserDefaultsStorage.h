/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDomain:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSString *)domain;
-(NSString *)description;
-(id)objectForKey:(id)arg1 ;
-(id)_actuallyReadObjectForKey:(id)arg1 ;
-(id)_decodeData:(id)arg1 forKey:(id)arg2 ;
-(void)_actuallyWriteObject:(id)arg1 forKey:(id)arg2 ;
-(id)setWithMutableClassIfApplicableFor:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

