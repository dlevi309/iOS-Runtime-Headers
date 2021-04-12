/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface MSPPathComponent : NSObject <NSCopying> {

	unsigned short _index;
	NSUUID* _originIdentifier;

}

@property (nonatomic,readonly) NSUUID * originIdentifier;              //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned short index;                   //@synthesize index=_index - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned short)index;
-(NSUUID *)originIdentifier;
-(id)initWithIndex:(unsigned short)arg1 originIdentifier:(id)arg2 ;
@end

