/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge, HMFDumpState> {

	NSString* _categoryType;
	NSString* _name;

}

@property (nonatomic,copy) NSString * categoryType;                               //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isWiFiRouterAccessoryCategory; 
@property (readonly) BOOL isTelevisionAccessoryCategory; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)categoryType;
-(id)init;
-(id)dumpState;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setCategoryType:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(NSString *)localizedDescription;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(id)arg1 name:(id)arg2 ;
-(id)localizedDescriptionPlural;
-(BOOL)isTelevisionAccessoryCategory;
-(BOOL)isWiFiRouterAccessoryCategory;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

