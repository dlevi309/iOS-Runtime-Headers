/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INPersonHandleExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding> {

	BOOL _suggested;
	NSString* _value;
	long long _type;
	NSString* _label;
	long long _emergencyType;

}

@property (nonatomic,readonly) long long emergencyType;                        //@synthesize emergencyType=_emergencyType - In the implementation block
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested;              //@synthesize suggested=_suggested - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 ;
-(long long)emergencyType;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 suggested:(BOOL)arg4 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 suggested:(BOOL)arg5 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 ;
-(BOOL)isSuggested;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

