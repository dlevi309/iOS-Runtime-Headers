/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYChange.h>

@protocol SYObject;
@class NSString;

@interface SYObjectWrapper : NSObject <SYChange> {

	long long _type;
	id<SYObject> _wrappedObject;

}

@property (nonatomic,readonly) id<SYObject> wrappedObject;               //@synthesize wrappedObject=_wrappedObject - In the implementation block
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)changeType;
-(NSString *)description;
-(NSString *)sequencer;
-(NSString *)objectIdentifier;
-(id<SYObject>)wrappedObject;
-(id)initWithSYObject:(id)arg1 type:(long long)arg2 ;
@end

