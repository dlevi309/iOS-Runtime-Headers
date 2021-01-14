/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOResourceManifestUpdateAssertionRecord.h>

@class NSString;

@interface _GEOResourceManifestUpdateAssertionRecord : NSObject <GEOResourceManifestUpdateAssertionRecord> {

	NSString* _process;
	NSString* _reason;
	double _creationTimestamp;

}

@property (nonatomic,readonly) NSString * process;                         //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) double creationTimestamp;                   //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)process;
-(id)init;
-(id)initWithProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3 ;
-(double)creationTimestamp;
-(NSString *)description;
-(NSString *)reason;
-(BOOL)isExpired;
@end

