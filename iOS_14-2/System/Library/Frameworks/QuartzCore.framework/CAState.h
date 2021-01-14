/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSArray;

@interface CAState : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _basedOn;
	NSMutableArray* _elements;
	double _nextDelay;
	double _previousDelay;
	BOOL _enabled;
	BOOL _locked;
	BOOL _initial;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (copy) NSString * basedOn;                                   //@synthesize basedOn=_basedOn - In the implementation block
@property (getter=isEnabled) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSArray * elements; 
@property (assign) double nextDelay;                                   //@synthesize nextDelay=_nextDelay - In the implementation block
@property (assign) double previousDelay;                               //@synthesize previousDelay=_previousDelay - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
@property (getter=isInitial) BOOL initial;                             //@synthesize initial=_initial - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
-(BOOL)isLocked;
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(void)addElement:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)init;
-(NSString *)basedOn;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setInitial:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(double)previousDelay;
-(void)encodeWithCoder:(id)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(id)debugDescription;
-(NSString *)name;
-(BOOL)isInitial;
-(void)setLocked:(BOOL)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)setBasedOn:(NSString *)arg1 ;
-(void)setPreviousDelay:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)nextDelay;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNextDelay:(double)arg1 ;
-(void)removeElement:(id)arg1 ;
-(void)dealloc;
@end

