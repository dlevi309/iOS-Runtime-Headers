/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(NSUUID *)identifierOfAffectedRecord;
@end

