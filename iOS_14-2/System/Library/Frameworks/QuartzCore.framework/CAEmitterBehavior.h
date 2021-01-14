/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAEmitterBehavior : NSObject <NSSecureCoding> {

	unsigned _type;
	NSString* _name;
	void* _attr;
	void* _cache;
	unsigned _flags;

}

@property (readonly) NSString * type; 
@property (copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled; 
+(id)behaviorWithType:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)behaviorTypes;
+(void)CAMLParserStartElement:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Object*)CA_copyRenderValue;
-(NSString *)name;
-(id)valueForKeyPath:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

