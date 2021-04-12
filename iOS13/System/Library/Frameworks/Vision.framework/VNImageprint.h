/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(VNMPImageDescriptor *)descriptor;
-(void)setDescriptor:(VNMPImageDescriptor *)arg1 ;
-(id)initWithState:(id)arg1 error:(id*)arg2 ;
-(id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)serializeStateAndReturnError:(id*)arg1 ;
-(unsigned long long)serializedLength;
-(id)initWithImageDescriptor:(id)arg1 type:(unsigned long long)arg2 requestRevision:(unsigned long long)arg3 ;
-(id)distanceToImageprint:(id)arg1 error:(id*)arg2 ;
@end

