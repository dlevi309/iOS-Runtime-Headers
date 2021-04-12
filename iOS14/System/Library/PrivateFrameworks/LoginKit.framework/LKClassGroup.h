/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface LKClassGroup : NSObject <NSSecureCoding> {

	NSString* _classGroupName;
	NSArray* _classes;

}

@property (nonatomic,copy,readonly) NSString * classGroupName;              //@synthesize classGroupName=_classGroupName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * classes;                      //@synthesize classes=_classes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)classes;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToLKClassGroup:(id)arg1 ;
-(NSString *)classGroupName;
-(id)initWithGroupName:(id)arg1 classes:(id)arg2 ;
-(id)initWithClassGroupDictionary:(id)arg1 classesDictionaryByClassID:(id)arg2 ;
@end

