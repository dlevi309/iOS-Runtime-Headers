/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface MSPReplicaEdit : NSObject <NSCopying> {

	NSUUID* _identifierOfAffectedRecord;

}

@property (nonatomic,readonly) NSUUID * identifierOfAffectedRecord;              //@synthesize identifierOfAffectedRecord=_identifierOfAffectedRecord - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(NSUUID *)identifierOfAffectedRecord;
@end

