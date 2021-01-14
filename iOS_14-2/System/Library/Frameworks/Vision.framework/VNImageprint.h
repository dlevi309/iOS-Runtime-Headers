/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNSerializingInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNSerializing.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class VNMPImageDescriptor;

@interface VNImageprint : NSObject <VNSerializingInternal, NSCopying, NSSecureCoding, VNSerializing, VNRequestRevisionProviding> {

	unsigned long long _requestRevision;
	VNMPImageDescriptor* _descriptor;
	unsigned long long _type;

}

@property (nonatomic,retain) VNMPImageDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long serializedLength; 
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)distanceToImageprint:(id)arg1 error:(id*)arg2 ;
-(id)serializeStateAndReturnError:(id*)arg1 ;
-(VNMPImageDescriptor *)descriptor;
-(id)initWithState:(id)arg1 error:(id*)arg2 ;
-(void)setDescriptor:(VNMPImageDescriptor *)arg1 ;
-(id)initWithImageDescriptor:(id)arg1 type:(unsigned long long)arg2 requestRevision:(unsigned long long)arg3 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializedLength;
-(unsigned long long)requestRevision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

