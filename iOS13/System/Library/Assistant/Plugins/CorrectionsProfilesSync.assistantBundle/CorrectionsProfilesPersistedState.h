/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)digest;
-(void)setDigest:(NSString *)arg1 ;
-(NSDictionary *)correctionsProfiles;
-(void)setCorrectionsProfiles:(NSDictionary *)arg1 ;
@end

