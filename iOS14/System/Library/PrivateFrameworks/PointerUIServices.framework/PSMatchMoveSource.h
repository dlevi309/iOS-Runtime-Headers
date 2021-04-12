/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)sourceLayerRenderID;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)sourceContextID;
-(id)initWithSourceContextID:(unsigned)arg1 sourceLayerRenderID:(unsigned long long)arg2 ;
@end

