/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSPDigest, NSString;

@interface TSPDataUniqueIdentifier : NSObject <NSCopying> {

	TSPDigest* _digest;

}

@property (nonatomic,readonly) TSPDigest * digest;                   //@synthesize digest=_digest - In the implementation block
@property (nonatomic,readonly) NSString * digestString; 
-(id)init;
-(unsigned long long)hash;
-(TSPDigest *)digest;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDigest:(id)arg1 ;
-(NSString *)digestString;
@end

