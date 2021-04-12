/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned _type;
	NSString* _name;
	unsigned _flags;
	void* _attr;
	void* _cache;

}

@property (readonly) NSString * type; 
@property (copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL cachesInputImage; 
@property (getter=isAccessibility) BOOL accessibility; 
+(BOOL)supportsSecureCoding;
+(id)filterTypes;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)filterWithType:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)filterWithName:(id)arg1 ;
-(BOOL)enabled;
-(id)initWithType:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Object*)CA_copyRenderValue;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)setCachesInputImage:(BOOL)arg1 ;
-(BOOL)cachesInputImage;
-(BOOL)isAccessibility;
-(void)setDefaults;
-(NSString *)type;
-(void)setAccessibility:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

