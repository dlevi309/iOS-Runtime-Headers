/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INPersonHandleExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding> {

	NSString* _value;
	long long _type;
	NSString* _label;
	long long _emergencyType;

}

@property (nonatomic,readonly) long long emergencyType;              //@synthesize emergencyType=_emergencyType - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * label;                     //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(NSString *)label;
-(id)initWithValue:(id)arg1 type:(long long)arg2 ;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 ;
-(long long)emergencyType;
@end

