/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, NSDate, NSDictionary, NSError, NSArray;

@interface HDReport : NSObject <NSSecureCoding, NSCopying> {

	NSMutableArray* _results;
	NSMutableDictionary* _files;
	NSDate* _startTime;
	NSDate* _endTime;
	NSDictionary* _auxiliaryData;
	NSError* _error;
	long long _status;

}

@property (nonatomic,copy) NSDate * startTime;                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSDate * endTime;                          //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,readonly) NSDictionary * files; 
@property (nonatomic,copy) NSDictionary * auxiliaryData;              //@synthesize auxiliaryData=_auxiliaryData - In the implementation block
@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long status;                      //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSArray *)results;
-(id)dictionaryRepresentation;
-(long long)status;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDictionary *)files;
-(void)addResult:(id)arg1 ;
-(void)addFile:(id)arg1 forName:(id)arg2 ;
-(NSDictionary *)auxiliaryData;
-(void)setAuxiliaryData:(NSDictionary *)arg1 ;
-(void)failedForError:(id)arg1 ;
-(BOOL)attemptToSetPassed;
@end

