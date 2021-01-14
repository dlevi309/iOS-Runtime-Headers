/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSSNewsTerminationItem : NSObject <NSCopying> {

	unsigned long long _processType;
	NSString* _bundleID;

}

@property (assign,nonatomic) unsigned long long processType;              //@synthesize processType=_processType - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProcessType:(unsigned long long)arg1 bundleID:(id)arg2 ;
-(unsigned long long)processType;
-(void)setProcessType:(unsigned long long)arg1 ;
@end

