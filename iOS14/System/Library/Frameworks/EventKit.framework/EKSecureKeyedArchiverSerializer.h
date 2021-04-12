/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/EKSerializer.h>

@class EKEventStore, NSString;

@interface EKSecureKeyedArchiverSerializer : NSObject <EKSerializer> {

	EKEventStore* _eventStore;
	NSString* _version;

}

@property (nonatomic,readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) NSString * version;                     //@synthesize version=_version - In the implementation block
-(EKEventStore *)eventStore;
-(id)serializeEvent:(id)arg1 error:(id*)arg2 ;
-(id)deserializeData:(id)arg1 error:(id*)arg2 ;
-(id)versionFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithEventStore:(id)arg1 withVersion:(id)arg2 ;
-(NSString *)version;
@end

