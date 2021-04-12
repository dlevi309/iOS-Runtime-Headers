/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventAppAssociating.h>

@class NSString;

@interface BMEventAppAssociatingImplementor : BMEventBase <BMEventAppAssociating> {

	NSString* bundleID;

}

@property (nonatomic,copy) NSString * bundleID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
-(NSString *)bundleID;
@end

