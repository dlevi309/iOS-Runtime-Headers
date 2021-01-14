/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class NSArray, NSString;

@interface HKCodedValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	NSArray* _codedValues;

}

@property (nonatomic,copy,readonly) NSArray * codedValues;              //@synthesize codedValues=_codedValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)codedValueCollectionWithCodedValues:(id)arg1 ;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
-(id)initWithCodedValues:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)codedValues;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

