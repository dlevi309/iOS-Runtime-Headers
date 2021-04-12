/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)cachedHash;
-(void)setCachedHash:(unsigned long long)arg1 ;
@end

