/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CWFJSONEncodable.h>

@class NSString;

@interface CWFChannel : NSObject <NSCopying, NSSecureCoding, CWFJSONEncodable> {

	int _flags;
	unsigned long long _channel;

}

@property (assign,nonatomic) unsigned long long channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) int flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) BOOL is2GHz; 
@property (nonatomic,readonly) BOOL is5GHz; 
@property (nonatomic,readonly) BOOL isDFS; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)flags;
-(int)width;
-(unsigned long long)channel;
-(void)setFlags:(int)arg1 ;
-(void)setChannel:(unsigned long long)arg1 ;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(id)JSONObject;
-(BOOL)isDFS;
-(BOOL)is2GHz;
-(BOOL)is5GHz;
@end

