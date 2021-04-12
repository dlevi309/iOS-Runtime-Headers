/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/CorrectionsProfilesSync.assistantBundle/CorrectionsProfilesSync
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface CorrectionsProfilesPersistedState : NSObject <NSSecureCoding> {

	NSDictionary* _correctionsProfiles;
	NSString* _digest;

}

@property (nonatomic,retain) NSDictionary * correctionsProfiles;              //@synthesize correctionsProfiles=_correctionsProfiles - In the implementation block
@property (nonatomic,copy) NSString * digest;                                 //@synthesize digest=_digest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDigest:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)digest;
-(NSDictionary *)correctionsProfiles;
-(void)setCorrectionsProfiles:(NSDictionary *)arg1 ;
@end

