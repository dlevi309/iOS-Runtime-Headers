/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(long long)changeType;
-(NSString *)objectIdentifier;
-(NSString *)sequencer;
-(id)initWithSYObject:(id)arg1 changeType:(long long)arg2 ;
@end

