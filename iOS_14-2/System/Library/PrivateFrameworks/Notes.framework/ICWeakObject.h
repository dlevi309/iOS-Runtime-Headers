/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICWeakObject : NSObject <NSCopying> {

	id _object;
	unsigned long long _cachedHash;

}

@property (assign,nonatomic) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (nonatomic,__weak,readonly) id object;                         //@synthesize object=_object - In the implementation block
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)cachedHash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCachedHash:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

