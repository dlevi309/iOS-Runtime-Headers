/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMUserException : FATException {

	NSNumber* _errorCode;
	NSString* _parameter;

}

@property (nonatomic,retain) NSNumber * errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * parameter;              //@synthesize parameter=_parameter - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)errorCode;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSString *)parameter;
-(void)setParameter:(NSString *)arg1 ;
@end

