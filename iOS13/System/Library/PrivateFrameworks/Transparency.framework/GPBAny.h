/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSData;

@interface GPBAny : GPBMessage

@property (nonatomic,copy) NSString * typeURL; 
@property (nonatomic,copy) NSData * value; 
+(id)descriptor;
+(id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
+(id)anyWithMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
-(BOOL)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
-(id)initWithMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)packWithMessage:(id)arg1 error:(id*)arg2 ;
-(id)unpackMessageClass:(Class)arg1 error:(id*)arg2 ;
@end

