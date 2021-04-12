/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const *)vertices;
-(unsigned long long)vertexCount;
-(id)initWithVertices:(const 1*)arg1 vertexCount:(unsigned long long)arg2 ;
@end

