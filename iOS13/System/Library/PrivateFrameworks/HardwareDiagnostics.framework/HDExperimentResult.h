/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface HDExperimentResult : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _measurements;
	NSMutableDictionary* _auxiliaryData;
	NSMutableDictionary* _files;

}

@property (nonatomic,readonly) NSMutableDictionary * measurements;               //@synthesize measurements=_measurements - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * auxiliaryData;              //@synthesize auxiliaryData=_auxiliaryData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * files;                      //@synthesize files=_files - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableDictionary *)files;
-(NSMutableDictionary *)measurements;
-(NSMutableDictionary *)auxiliaryData;
-(BOOL)isEqualToExperimentResult:(id)arg1 ;
@end

