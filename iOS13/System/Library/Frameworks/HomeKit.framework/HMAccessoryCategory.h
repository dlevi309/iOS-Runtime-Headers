/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)categoryType;
-(void)setCategoryType:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 name:(id)arg2 ;
-(id)dumpState;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(BOOL)isTelevisionAccessoryCategory;
-(BOOL)isWiFiRouterAccessoryCategory;
@end

