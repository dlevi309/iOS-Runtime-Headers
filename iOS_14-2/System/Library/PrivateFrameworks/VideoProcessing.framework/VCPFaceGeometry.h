/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VCPFaceGeometry : NSObject <NSSecureCoding> {

	* _vertices;
	unsigned long long _vertexCount;

}

@property (nonatomic,readonly) unsigned long long vertexCount;              //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) const * vertices; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)vertexCount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVertices:(const 1*)arg1 vertexCount:(unsigned long long)arg2 ;
-(const *)vertices;
-(void)dealloc;
@end

