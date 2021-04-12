/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString;

@interface WFMachineReadableCode : NSObject <WFSerializableContent, WFNaming> {

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
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(NSString *)type;
-(NSString *)stringValue;
-(id)initWithType:(id)arg1 stringValue:(id)arg2 ;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithMachineReadableCodeObject:(id)arg1 ;
@end

