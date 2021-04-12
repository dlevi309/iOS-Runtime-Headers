/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
*/

#import <libobjc.A.dylib/SYChange.h>

@protocol SYObject;
@class NSString;

@interface NPHSYObjectWrapper : NSObject <SYChange> {

	long long _type;
	id<SYObject> _wrappedObject;

}

@property (nonatomic,readonly) id<SYObject> wrappedObject;               //@synthesize wrappedObject=_wrappedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
-(long long)changeType;
-(NSString *)objectIdentifier;
-(NSString *)sequencer;
-(id<SYObject>)wrappedObject;
-(id)initWithSYObject:(id)arg1 type:(long long)arg2 ;
@end

