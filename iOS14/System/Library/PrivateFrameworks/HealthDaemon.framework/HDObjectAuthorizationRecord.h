/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)modificationDate;
-(void)setSourceID:(NSUUID *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)objectID;
-(void)setObjectID:(NSUUID *)arg1 ;
-(id)description;
-(void)setModificationDate:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSUUID *)sourceID;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

