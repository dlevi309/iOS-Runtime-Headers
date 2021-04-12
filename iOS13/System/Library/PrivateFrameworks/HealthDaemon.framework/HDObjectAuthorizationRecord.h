/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding> {

	NSUUID* _objectID;
	NSUUID* _sourceID;
	long long _status;
	double _modificationDate;

}

@property (nonatomic,copy) NSUUID * objectID;                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSUUID * sourceID;                      //@synthesize sourceID=_sourceID - In the implementation block
@property (assign,nonatomic) long long status;                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(double)modificationDate;
-(NSUUID *)objectID;
-(NSUUID *)sourceID;
-(void)setSourceID:(NSUUID *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setObjectID:(NSUUID *)arg1 ;
-(void)setModificationDate:(double)arg1 ;
@end

