/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>

@class BKSHIDEventKeyCommand, NSString;

@interface BKSHIDAuthenticatedKeyCommandSpecification : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable> {

	unsigned long long _context;
	BKSHIDEventKeyCommand* _keyCommand;

}

@property (assign,nonatomic) unsigned long long context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) BKSHIDEventKeyCommand * keyCommand;              //@synthesize keyCommand=_keyCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)specificationWithKeyCommand:(id)arg1 context:(unsigned long long)arg2 ;
-(void)setKeyCommand:(BKSHIDEventKeyCommand *)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)context;
-(NSString *)description;
-(BKSHIDEventKeyCommand *)keyCommand;
-(id)initForProtobufDecoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(unsigned long long)arg1 ;
@end

