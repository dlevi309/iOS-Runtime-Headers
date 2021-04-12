/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKDOMLSException.h>

@protocol IKDOMLSException <JSExport>
@property (assign,nonatomic) long long code; 
@required
-(void)setCode:(long long)arg1;
-(long long)code;

@end


@interface IKDOMLSException : IKJSObject <IKDOMLSException> {

	long long code;

}

@property (assign,nonatomic) long long code; 
+(id)exceptionWithAppContext:(id)arg1 code:(long long)arg2 ;
-(void)setCode:(long long)arg1 ;
-(long long)code;
@end

