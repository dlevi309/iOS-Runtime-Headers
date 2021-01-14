/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMBLocalZoneID.h>

@class NSString, NSData, NSArray;

@interface HMBLocalZoneIDRow : HMFObject <NSCopying, NSSecureCoding, HMBLocalZoneID> {

	NSString* _name;
	NSData* _token;

}

@property (nonatomic,readonly) NSData * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * labels; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSArray *)labels;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 token:(id)arg2 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

