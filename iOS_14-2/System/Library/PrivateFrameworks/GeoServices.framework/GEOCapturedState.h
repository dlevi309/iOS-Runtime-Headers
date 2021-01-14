/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface GEOCapturedState : NSObject <NSKeyedArchiverDelegate, NSSecureCoding>

@property (readonly) NSData * stateData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(const char*)decoderType;
+(id)fromStateData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(NSData *)stateData;
@end

