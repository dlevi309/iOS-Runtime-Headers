/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/WFScanableChannel.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFChannel : NSObject <WFScanableChannel, NSCopying, NSSecureCoding> {

	int _flags;
	unsigned long long _channel;

}

@property (nonatomic,readonly) unsigned long long channel; 
@property (nonatomic,readonly) unsigned long long flags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long channel;                //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) int flags;                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) BOOL is2GHz; 
@property (nonatomic,readonly) BOOL is5GHz; 
@property (nonatomic,readonly) BOOL isDFS; 
+(BOOL)supportsSecureCoding;
-(int)width;
-(BOOL)isDFS;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChannel:(unsigned long long)arg1 ;
-(unsigned long long)channel;
-(NSString *)description;
-(BOOL)is2GHz;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(BOOL)is5GHz;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

