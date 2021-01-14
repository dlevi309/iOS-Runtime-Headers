/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateRemoveElement : CAStateElement {

	NSString* _keyPath;
	id _object;

}

@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id object;                     //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

