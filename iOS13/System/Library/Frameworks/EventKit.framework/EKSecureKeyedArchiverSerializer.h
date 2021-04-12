/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)version;
-(EKEventStore *)eventStore;
-(id)initWithEventStore:(id)arg1 withVersion:(id)arg2 ;
-(id)serializeEvent:(id)arg1 error:(id*)arg2 ;
-(id)deserializeData:(id)arg1 error:(id*)arg2 ;
-(id)versionFromData:(id)arg1 error:(id*)arg2 ;
@end

