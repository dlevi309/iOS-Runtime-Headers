/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned short)index;
-(long long)compare:(id)arg1 ;
-(NSUUID *)originIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithIndex:(unsigned short)arg1 originIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

