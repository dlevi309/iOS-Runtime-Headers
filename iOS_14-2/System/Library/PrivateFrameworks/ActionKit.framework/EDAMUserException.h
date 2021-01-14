/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)parameter;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(void)setParameter:(NSString *)arg1 ;
@end

