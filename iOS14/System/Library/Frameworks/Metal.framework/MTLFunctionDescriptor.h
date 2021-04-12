/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLFunctionConstantValues;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {

	MTLFunctionDescriptorPrivate _private;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * specializedName; 
@property (nonatomic,copy) MTLFunctionConstantValues * constantValues; 
@property (assign,nonatomic) unsigned long long options; 
+(id)alloc;
+(id)functionDescriptor;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(void)setSpecializedName:(NSString *)arg1 ;
-(void)setConstantValues:(MTLFunctionConstantValues *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(MTLFunctionConstantValues *)constantValues;
-(NSString *)specializedName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

