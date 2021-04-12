/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {

	NSString* _path;
	_PASLock* _lock;

}
+(BOOL)supportsSecureCoding;
+(id)defaultProviderWithPaths:(id)arg1 ;
-(id)subject;
-(id)anchorDate;
-(BOOL)save;
-(BOOL)loadUsingGuardedData:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)rotateSubject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)nextRotationDate;
-(id)nextRotationDateAfter:(id)arg1 ;
-(id)subjectWithProjectId:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 guardedData:(id)arg2 ;
-(void)decodeWithCoder:(id)arg1 guardedData:(id)arg2 ;
-(void)setNextRotationDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfWeeksPerRotation;
@end

