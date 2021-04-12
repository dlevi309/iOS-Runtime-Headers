/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding> {

	long long _layoutType;
	unsigned long long _keyboardType;
	NSString* _identifier;
	NSString* _primaryLanguage;
	unsigned long long _flags;
	double _time;
	NSString* _keys;
	NSString* _ukeys;

}

@property (readonly) long long keyboardLayoutType; 
@property (readonly) unsigned long long keyboardType; 
@property (copy,readonly) NSString * keyboardLayoutIdentifier; 
@property (copy,readonly) NSString * primaryLanguage; 
@property (readonly) unsigned long long flags; 
@property (readonly) double timestamp; 
@property (copy,readonly) NSString * characters; 
@property (copy,readonly) NSString * charactersIgnoringModifiers; 
+(BOOL)supportsSecureCoding;
-(id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 primaryLanguage:(id)arg4 flags:(unsigned long long)arg5 timestamp:(double)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8 ;
-(unsigned long long)keyboardType;
-(NSString *)characters;
-(double)timestamp;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
-(id)description;
-(NSString *)keyboardLayoutIdentifier;
-(NSString *)charactersIgnoringModifiers;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)keyboardLayoutType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

