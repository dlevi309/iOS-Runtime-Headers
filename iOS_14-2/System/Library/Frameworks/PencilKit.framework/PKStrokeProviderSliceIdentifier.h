/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHStrokeIdentifier.h>

@class NSUUID, NSString;

@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier> {

	double _tStart;
	double _tEnd;
	NSUUID* _strokeUUID;
	PKStrokeID _version;

}

@property (nonatomic,readonly) double tStart;                       //@synthesize tStart=_tStart - In the implementation block
@property (nonatomic,readonly) double tEnd;                         //@synthesize tEnd=_tEnd - In the implementation block
@property (nonatomic,readonly) NSUUID * strokeUUID;                 //@synthesize strokeUUID=_strokeUUID - In the implementation block
@property (nonatomic,readonly) PKStrokeID version;                  //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)tEnd;
-(void)encodeWithCoder:(id)arg1 ;
-(double)tStart;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKStrokeID)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)strokeUUID;
-(id)initWithUUID:(id)arg1 version:(PKStrokeID)arg2 tStart:(double)arg3 tEnd:(double)arg4 ;
@end

