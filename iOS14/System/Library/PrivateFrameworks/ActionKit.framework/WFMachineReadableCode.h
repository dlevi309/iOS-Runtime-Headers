/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString;

@interface WFMachineReadableCode : NSObject <NSSecureCoding, WFSerializableContent, WFNaming> {

	NSString* _type;
	NSString* _stringValue;

}

@property (nonatomic,copy,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithType:(id)arg1 stringValue:(id)arg2 ;
-(NSString *)wfName;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMachineReadableCodeObject:(id)arg1 ;
-(id)wfSerializedRepresentation;
@end

