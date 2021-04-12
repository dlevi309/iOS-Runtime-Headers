/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADFlags : NSObject <NSCopying> {

	unsigned long long _flags;

}

@property (assign) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
+(id)initWithFlags:(unsigned long long)arg1 ;
-(void)unset:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)noneSet;
-(unsigned long long)flags;
-(BOOL)isSet:(unsigned long long)arg1 ;
-(void)set:(unsigned long long)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)reset;
-(BOOL)allSet:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)anySet:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

