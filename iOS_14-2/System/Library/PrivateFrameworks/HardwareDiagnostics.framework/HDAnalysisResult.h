/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary;

@interface HDAnalysisResult : NSObject <NSSecureCoding, NSCopying> {

	NSMutableArray* _measuredResults;
	NSMutableDictionary* _auxiliaryData;
	NSMutableDictionary* _files;

}

@property (nonatomic,readonly) NSMutableArray * measuredResults;                 //@synthesize measuredResults=_measuredResults - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * auxiliaryData;              //@synthesize auxiliaryData=_auxiliaryData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * files;                      //@synthesize files=_files - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)init;
-(NSMutableDictionary *)files;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableDictionary *)auxiliaryData;
-(NSMutableArray *)measuredResults;
-(BOOL)isEqualToAnalysisResult:(id)arg1 ;
@end

