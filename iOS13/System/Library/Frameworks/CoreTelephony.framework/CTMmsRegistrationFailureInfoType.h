/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding> {

	BOOL _dataActive;
	BOOL _isDataAttached;
	BOOL _activationForMms;
	NSNumber* _pdpContextId;

}

@property (nonatomic,retain) NSNumber * pdpContextId;              //@synthesize pdpContextId=_pdpContextId - In the implementation block
@property (assign,nonatomic) BOOL dataActive;                      //@synthesize dataActive=_dataActive - In the implementation block
@property (assign,nonatomic) BOOL isDataAttached;                  //@synthesize isDataAttached=_isDataAttached - In the implementation block
@property (assign,nonatomic) BOOL activationForMms;                //@synthesize activationForMms=_activationForMms - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPdpContextId:(NSNumber *)arg1 ;
-(void)setDataActive:(BOOL)arg1 ;
-(void)setIsDataAttached:(BOOL)arg1 ;
-(void)setActivationForMms:(BOOL)arg1 ;
-(NSNumber *)pdpContextId;
-(BOOL)dataActive;
-(BOOL)isDataAttached;
-(BOOL)activationForMms;
-(BOOL)isEqualToCTMmsRegistrationFailureInfoType:(id)arg1 ;
@end

