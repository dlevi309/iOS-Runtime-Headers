/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)smdpAddress;
-(NSString *)matchingId;
-(NSString *)OID;
-(void)setOID:(NSString *)arg1 ;
-(void)setSmdpAddress:(NSString *)arg1 ;
-(void)setMatchingId:(NSString *)arg1 ;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
@end

