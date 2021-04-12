/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventBinaryStepping.h>

@class NSString;

@interface BMEventBinarySteppingImplementor : BMEventBase <BMEventBinaryStepping> {

	BOOL starting;

}

@property (assign,getter=isStarting,nonatomic) BOOL starting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(void)setStarting:(BOOL)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)isStarting;
@end

