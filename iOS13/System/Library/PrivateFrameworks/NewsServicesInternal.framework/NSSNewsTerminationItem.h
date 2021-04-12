/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithProcessType:(unsigned long long)arg1 bundleID:(id)arg2 ;
-(unsigned long long)processType;
-(void)setProcessType:(unsigned long long)arg1 ;
@end

