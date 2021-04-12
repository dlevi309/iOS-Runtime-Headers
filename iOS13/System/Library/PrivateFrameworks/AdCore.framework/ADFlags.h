/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADFlags : NSObject <NSCopying> {

	unsigned long long _flags;

}

@property (assign) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
+(id)initWithFlags:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(void)reset;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)isSet:(unsigned long long)arg1 ;
-(void)set:(unsigned long long)arg1 ;
-(unsigned long long)anySet:(unsigned long long)arg1 ;
-(BOOL)allSet:(unsigned long long)arg1 ;
-(void)unset:(unsigned long long)arg1 ;
-(BOOL)noneSet;
@end

