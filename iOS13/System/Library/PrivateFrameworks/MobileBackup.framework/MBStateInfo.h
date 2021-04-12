/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError, NSMutableArray, NSDate;

@interface MBStateInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCloud;
	BOOL _isBackground;
	int _state;
	float _progress;
	unsigned long long _estimatedTimeRemaining;
	NSError* _error;
	NSMutableArray* _errors;
	NSDate* _date;

}

@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isBackground;                                      //@synthesize isBackground=_isBackground - In the implementation block
@property (assign,nonatomic) BOOL isCloud;                                           //@synthesize isCloud=_isCloud - In the implementation block
@property (assign,nonatomic) float progress;                                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (nonatomic,retain) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;                                //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)dictionaryRepresentation;
-(float)progress;
-(int)state;
-(unsigned long long)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(unsigned long long)arg1 ;
-(void)setState:(int)arg1 ;
-(NSMutableArray *)errors;
-(void)setDate:(NSDate *)arg1 ;
-(void)setIsBackground:(BOOL)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isBackground;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 isCloud:(BOOL)arg4 isBackground:(BOOL)arg5 error:(id)arg6 errors:(id)arg7 ;
-(id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 error:(id)arg4 errors:(id)arg5 ;
-(BOOL)isCloud;
-(void)setIsCloud:(BOOL)arg1 ;
@end

