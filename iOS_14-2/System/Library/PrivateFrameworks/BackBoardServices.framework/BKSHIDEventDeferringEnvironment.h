/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)environmentWithIdentifier:(id)arg1 ;
+(id)keyboardFocusEnvironment;
+(id)systemEnvironment;
+(id)protobufSchema;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(NSString *)description;
-(id)initForProtobufDecoding;
-(BOOL)_isSystemEnvironment;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isKeyboardFocusEnvironment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

