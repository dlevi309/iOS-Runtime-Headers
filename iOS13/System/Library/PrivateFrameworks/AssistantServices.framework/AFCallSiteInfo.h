/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)imagePath;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSString *)symbolName;
-(id)initWithImagePath:(id)arg1 symbolName:(id)arg2 ;
@end

