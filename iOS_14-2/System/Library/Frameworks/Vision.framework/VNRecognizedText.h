/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CRImageReaderOutput, NSString;

@interface VNRecognizedText : NSObject <NSCopying, NSSecureCoding> {

	CRImageReaderOutput* _crOutput;
	unsigned long long _requestRevision;

}

@property (copy,readonly) CRImageReaderOutput * crOutput;                       //@synthesize crOutput=_crOutput - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
@property (nonatomic,copy,readonly) NSString * string; 
@property (nonatomic,readonly) float confidence; 
+(BOOL)supportsSecureCoding;
-(float)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)initWithRequestRevision:(unsigned long long)arg1 CRImageReaderOutput:(id)arg2 ;
-(id)boundingBoxForRange:(NSRange)arg1 error:(id*)arg2 ;
-(CRImageReaderOutput *)crOutput;
-(unsigned long long)requestRevision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

