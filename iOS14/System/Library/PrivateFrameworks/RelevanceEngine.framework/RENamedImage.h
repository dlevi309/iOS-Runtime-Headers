/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REImage.h>

@class NSString, NSBundle;

@interface RENamedImage : REImage {

	NSString* _name;
	NSBundle* _bundle;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                 //@synthesize bundle=_bundle - In the implementation block
-(id)image;
-(NSBundle *)bundle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 inBundle:(id)arg2 ;
@end

