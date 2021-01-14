/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFCallSiteInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _imagePath;
	NSString* _symbolName;

}

@property (nonatomic,copy,readonly) NSString * imagePath;               //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbolName;              //@synthesize symbolName=_symbolName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSString *)symbolName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithImagePath:(id)arg1 symbolName:(id)arg2 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)imagePath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

