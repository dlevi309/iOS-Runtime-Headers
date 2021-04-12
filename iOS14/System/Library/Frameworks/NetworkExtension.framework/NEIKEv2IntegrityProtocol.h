/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying> {

	unsigned long long _type;

}

@property (readonly) unsigned keyLength; 
@property (readonly) unsigned digestLength; 
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(id)initWithType:(unsigned long long)arg1 ;
-(unsigned)keyLength;
-(unsigned)digestLength;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

