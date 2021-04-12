/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateSetValue : CAStateElement {

	NSString* _keyPath;
	id _value;

}

@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id value; 
+(BOOL)supportsSecureCoding;
-(BOOL)CAMLTypeSupportedForKey:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(id)debugDescription;
-(void)setValue:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(void)dealloc;
@end

