/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanManagerCameraScanAction : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _message;
	NSString* _smdpAddress;
	NSString* _matchingId;
	NSString* _OID;

}

@property (nonatomic,retain) NSString * smdpAddress;              //@synthesize smdpAddress=_smdpAddress - In the implementation block
@property (nonatomic,retain) NSString * matchingId;               //@synthesize matchingId=_matchingId - In the implementation block
@property (nonatomic,retain) NSString * OID;                      //@synthesize OID=_OID - In the implementation block
@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                    //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)smdpAddress;
-(NSString *)matchingId;
-(NSString *)message;
-(void)setSmdpAddress:(NSString *)arg1 ;
-(void)setMatchingId:(NSString *)arg1 ;
-(NSString *)OID;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setOID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

