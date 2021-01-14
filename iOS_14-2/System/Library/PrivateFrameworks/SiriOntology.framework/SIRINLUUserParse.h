/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID, NSString;

@interface SIRINLUUserParse : NSObject <NSSecureCoding> {

	NSArray* _userDialogActs;
	double _probability;
	NSUUID* _nsUUID;
	NSString* _parserId;

}

@property (nonatomic,retain) NSArray * userDialogActs;              //@synthesize userDialogActs=_userDialogActs - In the implementation block
@property (assign,nonatomic) double probability;                    //@synthesize probability=_probability - In the implementation block
@property (nonatomic,retain) NSUUID * nsUUID;                       //@synthesize nsUUID=_nsUUID - In the implementation block
@property (nonatomic,retain) NSString * parserId;                   //@synthesize parserId=_parserId - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)probability;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)nsUUID;
-(id)description;
-(void)setProbability:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)parserId;
-(NSArray *)userDialogActs;
-(id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 nsUUID:(id)arg3 parserId:(id)arg4 ;
-(void)setUserDialogActs:(NSArray *)arg1 ;
-(void)setNsUUID:(NSUUID *)arg1 ;
-(void)setParserId:(NSString *)arg1 ;
@end

