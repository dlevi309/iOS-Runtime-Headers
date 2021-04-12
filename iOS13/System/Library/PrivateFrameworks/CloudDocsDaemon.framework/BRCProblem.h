/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProblem:(id)arg1 ;
-(id)initWithType:(int)arg1 recordName:(id)arg2 ;
-(void)mergeWithProblem:(id)arg1 ;
-(NSSet *)effectedRecordNames;
@end

