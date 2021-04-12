/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHSWidgetMetrics, NSFileHandle;

@interface CHSPlaceholderRequest : NSObject <NSCopying, NSSecureCoding> {

	CHSWidgetMetrics* _metrics;
	long long _family;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,readonly) CHSWidgetMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) long long family;                        //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;               //@synthesize fileHandle=_fileHandle - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(CHSWidgetMetrics *)metrics;
-(id)init;
-(id)initWithMetrics:(id)arg1 family:(long long)arg2 fileHandle:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(long long)family;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

