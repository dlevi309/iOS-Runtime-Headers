/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
*/

#import <PointerUIServices/PointerUIServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PSMatchMoveSource : NSObject <NSCopying, NSSecureCoding> {

	unsigned _sourceContextID;
	unsigned long long _sourceLayerRenderID;

}

@property (nonatomic,readonly) unsigned long long sourceLayerRenderID;              //@synthesize sourceLayerRenderID=_sourceLayerRenderID - In the implementation block
@property (nonatomic,readonly) unsigned sourceContextID;                            //@synthesize sourceContextID=_sourceContextID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)sourceContextID;
-(unsigned long long)sourceLayerRenderID;
-(id)initWithSourceContextID:(unsigned)arg1 sourceLayerRenderID:(unsigned long long)arg2 ;
@end

