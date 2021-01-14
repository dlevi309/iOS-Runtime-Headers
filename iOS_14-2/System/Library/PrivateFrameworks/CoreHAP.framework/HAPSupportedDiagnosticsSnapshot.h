/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPDiagnosticsSnapshotFormatWrapper, HAPDiagnosticsSnapshotTypeWrapper, NSString;

@interface HAPSupportedDiagnosticsSnapshot : NSObject <NSCopying, HAPTLVProtocol> {

	HAPDiagnosticsSnapshotFormatWrapper* _format;
	HAPDiagnosticsSnapshotTypeWrapper* _type;

}

@property (nonatomic,retain) HAPDiagnosticsSnapshotFormatWrapper * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) HAPDiagnosticsSnapshotTypeWrapper * type;                  //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setFormat:(HAPDiagnosticsSnapshotFormatWrapper *)arg1 ;
-(HAPDiagnosticsSnapshotFormatWrapper *)format;
-(id)init;
-(void)setType:(HAPDiagnosticsSnapshotTypeWrapper *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HAPDiagnosticsSnapshotTypeWrapper *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithFormat:(id)arg1 type:(id)arg2 ;
@end

