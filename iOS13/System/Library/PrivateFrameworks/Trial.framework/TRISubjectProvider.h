/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {

	NSString* _path;
	_PASLock* _lock;

}
+(BOOL)supportsSecureCoding;
+(id)defaultProvider;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)save;
-(id)subject;
-(id)anchorDate;
-(id)subjectWithProjectId:(int)arg1 ;
-(id)nextRotationDate;
-(void)decodeWithCoder:(id)arg1 guardedData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 guardedData:(id)arg2 ;
-(BOOL)loadUsingGuardedData:(id)arg1 ;
-(unsigned long long)numberOfWeeksPerRotation;
-(id)nextRotationDateAfter:(id)arg1 ;
-(void)setNextRotationDate:(id)arg1 ;
-(void)rotateSubject;
@end

