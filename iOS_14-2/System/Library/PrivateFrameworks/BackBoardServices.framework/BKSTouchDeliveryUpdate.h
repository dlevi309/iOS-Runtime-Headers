/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKSTouchDeliveryUpdate : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isDetached;
	unsigned _touchIdentifier;
	unsigned _contextID;
	int _pid;
	long long _type;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned touchIdentifier;              //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isDetached;                       //@synthesize isDetached=_isDetached - In the implementation block
@property (assign,nonatomic) unsigned contextID;                    //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) int pid;                               //@synthesize pid=_pid - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)pid;
-(unsigned)touchIdentifier;
-(BOOL)isDetached;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTouchIdentifier:(unsigned)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(void)setContextID:(unsigned)arg1 ;
-(unsigned)contextID;
-(void)setIsDetached:(BOOL)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

