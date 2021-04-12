/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface BRCErrorGrouping : NSObject <NSCopying> {

	BOOL _isPCSChained;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL isPCSChained;              //@synthesize isPCSChained=_isPCSChained - In the implementation block
-(NSError *)error;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isPCSChained;
-(id)initWithError:(id)arg1 pcsChained:(BOOL)arg2 ;
-(BOOL)isEqualToErrorGrouping:(id)arg1 ;
@end

