/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface BRCProblem : NSObject <NSSecureCoding, NSCopying> {

	int _type;
	NSSet* _effectedRecordNames;

}

@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * effectedRecordNames;              //@synthesize effectedRecordNames=_effectedRecordNames - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProblem:(id)arg1 ;
-(id)initWithType:(int)arg1 recordName:(id)arg2 ;
-(void)mergeWithProblem:(id)arg1 ;
-(NSSet *)effectedRecordNames;
@end

