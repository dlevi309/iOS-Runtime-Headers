/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/SYObject.h>

@protocol SYObject;
@class NSString;

@interface _SYObjectCompatibilityWrapper : NSProxy <SYChange, SYObject> {

	id<SYObject> _syObject;
	long long _type;

}

@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)changeType;
-(NSString *)sequencer;
-(NSString *)objectIdentifier;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithSYObject:(id)arg1 changeType:(long long)arg2 ;
@end

